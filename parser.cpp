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

// $Revision: 13519 $ $Date:: 2020-08-19 #$ $Author: serge $

#include "parser.h"                 // self

#include <map>
#include <stdexcept>                // std::invalid_argument

NAMESPACE_DTMF_TOOLS_START

#define TUPLE_VAL_STR(_x_)  _x_,#_x_
#define TUPLE_STR_VAL(_x_)  #_x_,_x_

template< typename _M, typename _U, typename _V >
void insert_inverse_pair( _M & map, _U first, _V second )
{
    map.insert( typename _M::value_type( second, first ) );
}

tone_e to_tone( const std::string & s )
{
    typedef std::map< std::string, tone_e > Map;
    static Map m;
    if( m.empty() )
    {
        insert_inverse_pair( m, tone_e:: TUPLE_VAL_STR( TONE_0 ) );
        insert_inverse_pair( m, tone_e:: TUPLE_VAL_STR( TONE_1 ) );
        insert_inverse_pair( m, tone_e:: TUPLE_VAL_STR( TONE_2 ) );
        insert_inverse_pair( m, tone_e:: TUPLE_VAL_STR( TONE_3 ) );
        insert_inverse_pair( m, tone_e:: TUPLE_VAL_STR( TONE_4 ) );
        insert_inverse_pair( m, tone_e:: TUPLE_VAL_STR( TONE_5 ) );
        insert_inverse_pair( m, tone_e:: TUPLE_VAL_STR( TONE_6 ) );
        insert_inverse_pair( m, tone_e:: TUPLE_VAL_STR( TONE_7 ) );
        insert_inverse_pair( m, tone_e:: TUPLE_VAL_STR( TONE_8 ) );
        insert_inverse_pair( m, tone_e:: TUPLE_VAL_STR( TONE_9 ) );
        insert_inverse_pair( m, tone_e:: TUPLE_VAL_STR( TONE_A ) );
        insert_inverse_pair( m, tone_e:: TUPLE_VAL_STR( TONE_B ) );
        insert_inverse_pair( m, tone_e:: TUPLE_VAL_STR( TONE_C ) );
        insert_inverse_pair( m, tone_e:: TUPLE_VAL_STR( TONE_D ) );
        insert_inverse_pair( m, tone_e:: TUPLE_VAL_STR( TONE_STAR ) );
        insert_inverse_pair( m, tone_e:: TUPLE_VAL_STR( TONE_HASH ) );
    }

    auto it = m.find( s );

    if( it == m.end() )
        throw std::invalid_argument( ( "to_tone: cannot parse " + s ).c_str() );

    return it->second;
}


NAMESPACE_DTMF_TOOLS_END
