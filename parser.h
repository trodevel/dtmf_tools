/*

Parser.

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

// $Revision: 3352 $ $Date:: 2016-02-03 #$ $Author: serge $

#ifndef DTMF_TOOLS_PARSER_H
#define DTMF_TOOLS_PARSER_H

#include "generic_request/request.h"

#include <string>               // std::string

#include "dtmf_enum.h"          // tone_e

#include "namespace_lib.h"      // NAMESPACE_DTMF_TOOLS_START

NAMESPACE_DTMF_TOOLS_START

tone_e               to_tone( const std::string & s );

namespace parser
{

void get_value_or_throw( tone_e * res, const std::string & key, const generic_request::Request & r );

}

NAMESPACE_DTMF_TOOLS_END

#endif // DTMF_TOOLS_PARSER_H
