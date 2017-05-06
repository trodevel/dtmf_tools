/*

Serializer.

Copyright (C) 2017 Sergey Kolevatov

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.

*/

// $Revision: 6859 $ $Date:: 2017-05-05 #$ $Author: serge $

#include "serializer.h"     // self

#include <stdexcept>        // std::invalid_argument

#include "../serializer/serializer.h"   // serializer::

namespace serializer
{

dtmf_tools::tone_e* load( std::istream & is, dtmf_tools::tone_e* e )
{
    return dtmf_tools::Serializer::load( is, e );
}

bool save( std::ostream & os, const dtmf_tools::tone_e & e )
{
    return dtmf_tools::Serializer::save( os, e );
}

}

namespace dtmf_tools
{

tone_e* Serializer::load_1( std::istream & is, tone_e* e )
{
    if( e == nullptr )
        throw std::invalid_argument( "Serializer::load: tone_e is null" );

    uint32_t    tone;

    is >> tone;

    if( is.fail() )
        return nullptr;

    * e             = static_cast<tone_e>( tone );

    return e;
}

tone_e* Serializer::load( std::istream & is, tone_e* e )
{
    return load_t_1( is, e );
}

bool Serializer::save( std::ostream & os, const tone_e & e )
{
    static const unsigned int VERSION = 1;

    auto b = serializer::save( os, VERSION );

    if( b == false )
        return false;

    b &= serializer::save( os, static_cast<uint32_t>( e ) );

    return b;
}

} // namespace dtmf_tools
