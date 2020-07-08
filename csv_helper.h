#ifndef APG_DTMF_TOOLS__CSV_HELPER_H
#define APG_DTMF_TOOLS__CSV_HELPER_H

// system includes
#include <sstream>

// includes
#include "protocol.h"

namespace dtmf_tools
{

namespace csv_helper
{

// enums
std::ostream & write( std::ostream & os, const tone_e r );

template<class T>
std::string to_csv( const T & l )
{
    std::ostringstream os;

    write( os, l );

    return os.str();
}

} // namespace csv_helper

} // namespace dtmf_tools

#endif // APG_DTMF_TOOLS__CSV_HELPER_H
