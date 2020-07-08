// system includes

// includes
#include "csv_helper.h"

namespace dtmf_tools
{

namespace csv_helper
{

// enums

std::ostream & write( std::ostream & os, const tone_e r )
{
    os << static_cast<unsigned>( r ) << ";";

    return os;
}

} // namespace csv_helper

} // namespace dtmf_tools

