// includes
#include "dummy_creator.h"

#include <cstdlib>         // rand()

namespace dtmf_tools
{

namespace dummy
{

// enums

tone_e create__tone_e()
{
    auto res = static_cast<tone_e>( std::rand() % 16 );

    return res;
}

} // namespace dummy

} // namespace dtmf_tools

