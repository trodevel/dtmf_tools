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

#ifndef LIB_DTMF_TOOLS_SERIALIZER_H
#define LIB_DTMF_TOOLS_SERIALIZER_H

#include <iostream>         // std::istream

#include "../serializer/versionable_loader_t.h"     // serializer::VersionableLoaderT
#include "dtmf_enum.h"      // dtmf_tools::tone_e

namespace dtmf_tools
{

class Serializer: public serializer::VersionableLoaderT<Serializer>
{
    friend serializer::VersionableLoaderT<Serializer>;

public:
    static tone_e* load( std::istream & is, tone_e* e );
    static bool save( std::ostream & os, const tone_e & e );

private:

    static tone_e* load_1( std::istream & is, tone_e* e );
};

} // namespace dtmf_tools

#endif // LIB_DTMF_TOOLS_SERIALIZER_H
