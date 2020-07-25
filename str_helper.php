<?php

namespace dtmf_tools;


// includes
require_once __DIR__.'/../basic_parser/str_helper.php';

// enums

function to_string__tone_e( $r )
{
    $map = array
    (
        tone_e__TONE_0 => 'TONE_0',
        tone_e__TONE_1 => 'TONE_1',
        tone_e__TONE_2 => 'TONE_2',
        tone_e__TONE_3 => 'TONE_3',
        tone_e__TONE_4 => 'TONE_4',
        tone_e__TONE_5 => 'TONE_5',
        tone_e__TONE_6 => 'TONE_6',
        tone_e__TONE_7 => 'TONE_7',
        tone_e__TONE_8 => 'TONE_8',
        tone_e__TONE_9 => 'TONE_9',
        tone_e__TONE_A => 'TONE_A',
        tone_e__TONE_B => 'TONE_B',
        tone_e__TONE_C => 'TONE_C',
        tone_e__TONE_E => 'TONE_E',
        tone_e__TONE_STAR => 'TONE_STAR',
        tone_e__TONE_HASH => 'TONE_HASH',
    );

    if( array_key_exists( $r, $map ) )
    {
        return $map[ $r ];
    }

    return '?';
}

// objects

// base messages

// messages

// generic

function to_string( $obj )
{
    $handler_map = array(
        // objects
        // messages
    );

    $type = get_class( $obj );

    if( array_key_exists( $type, $handler_map ) )
    {
        $func = '\\dtmf_tools\\' . $handler_map[ $type ];
        return $func( $obj );
    }

    return NULL;
}

# namespace_end dtmf_tools


?>
