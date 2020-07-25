<?php

namespace dtmf_tools;


// includes
require_once __DIR__.'/../basic_parser/html_helper.php';
require_once 'str_helper.php';

// enums

function to_html_header__tone_e( $r )
{
    return array( 'TONE_E' );
}

function to_html__tone_e( $r )
{
    return to_string__tone_e( $r ) . " (" . $r . ")";
}

// objects

// base messages

// messages

// generic

function to_html( $obj )
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
