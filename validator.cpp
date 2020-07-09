// includes
#include "validator.h"

namespace dtmf_tools
{

namespace validator
{

// enums

bool validate( const std::string & prefix, const tone_e r )
{
    if( r < tone_e::TONE_0 || r > tone_e::TONE_HASH )
        return false;

    return true;
}

} // namespace validator

} // namespace dtmf_tools

