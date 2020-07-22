/*

String Helper. Provides to_string() function.

Copyright (C) 2014 Sergey Kolevatov

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

// $Revision: 13398 $ $Date:: 2020-07-23 #$ $Author: serge $

#include <string>

// system includes
#include <sstream>

#include "dtmf_enum.h"          // tone_e

#include "namespace_lib.h"      // NAMESPACE_DTMF_TOOLS_START

NAMESPACE_DTMF_TOOLS_START

const std::string & to_string( const tone_e l );

namespace str_helper
{

// enums
std::ostream & write( std::ostream & os, const tone_e r );

template<class T>
std::string to_string( const T & l )
{
    std::ostringstream os;

    write( os, l );

    return os.str();
}

} // namespace str_helper

NAMESPACE_DTMF_TOOLS_END
