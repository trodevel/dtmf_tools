#ifndef APG_DTMF_TOOLS__VALIDATOR_H
#define APG_DTMF_TOOLS__VALIDATOR_H

// includes
#include "protocol.h"

#include <string>

namespace dtmf_tools
{

namespace validator
{

// enums
bool validate( const std::string & prefix, const tone_e r );

} // namespace validator

} // namespace dtmf_tools

#endif // APG_DTMF_TOOLS__VALIDATOR_H
