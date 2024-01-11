/*
  ==============================================================================

    LNormalisableRange.h
    Created: 11 Jan 2024 9:32:49pm
    Author:  Tedjuh

  ==============================================================================
*/

#ifndef L_NORMALISABLE_RANGE
#define L_NORMALISABLE_RANGE

extern  "C"
{
#include "lua.h"
}

class LNormalisableRange
{
public:
    static void wrapForLua(lua_State* L);
};

#endif
