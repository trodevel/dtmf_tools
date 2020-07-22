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

#include "str_helper.h"             // self

#include <map>

NAMESPACE_DTMF_TOOLS_START

#define TUPLE_VAL_STR(_x_)  _x_,#_x_
#define TUPLE_STR_VAL(_x_)  #_x_,_x_

#define MAP_INSERT_VAL( _m, _val )      _m.insert( Map::value_type( _val ) )

const std::string & to_string( const tone_e l )
{
    typedef std::map< tone_e, std::string > Map;
    static Map m;
    if( m.empty() )
    {
        MAP_INSERT_VAL( m, tone_e:: TUPLE_VAL_STR( TONE_0 ) );
        MAP_INSERT_VAL( m, tone_e:: TUPLE_VAL_STR( TONE_1 ) );
        MAP_INSERT_VAL( m, tone_e:: TUPLE_VAL_STR( TONE_2 ) );
        MAP_INSERT_VAL( m, tone_e:: TUPLE_VAL_STR( TONE_3 ) );
        MAP_INSERT_VAL( m, tone_e:: TUPLE_VAL_STR( TONE_4 ) );
        MAP_INSERT_VAL( m, tone_e:: TUPLE_VAL_STR( TONE_5 ) );
        MAP_INSERT_VAL( m, tone_e:: TUPLE_VAL_STR( TONE_6 ) );
        MAP_INSERT_VAL( m, tone_e:: TUPLE_VAL_STR( TONE_7 ) );
        MAP_INSERT_VAL( m, tone_e:: TUPLE_VAL_STR( TONE_8 ) );
        MAP_INSERT_VAL( m, tone_e:: TUPLE_VAL_STR( TONE_9 ) );
        MAP_INSERT_VAL( m, tone_e:: TUPLE_VAL_STR( TONE_A ) );
        MAP_INSERT_VAL( m, tone_e:: TUPLE_VAL_STR( TONE_B ) );
        MAP_INSERT_VAL( m, tone_e:: TUPLE_VAL_STR( TONE_C ) );
        MAP_INSERT_VAL( m, tone_e:: TUPLE_VAL_STR( TONE_D ) );
        MAP_INSERT_VAL( m, tone_e:: TUPLE_VAL_STR( TONE_STAR ) );
        MAP_INSERT_VAL( m, tone_e:: TUPLE_VAL_STR( TONE_HASH ) );
    }

    auto it = m.find( l );

    static const std::string undef( "undef" );

    if( it == m.end() )
        return undef;

    return it->second;
}

namespace str_helper
{

// enums

std::ostream & write( std::ostream & os, const tone_e r )
{
    os << dtmf_tools::to_string( r );

    return os;
}

} // namespace str_helper

NAMESPACE_DTMF_TOOLS_END
