#include "XDMsafety.h"
#include <string.h>

bool XDM_safety_check(const VehicleState* vs, const XDM_State* state) {
    (void)vs; (void)state;
    /* TODO: XDM safety limits for Exit Diff Map */
    return true;
}

void XDM_safety_enter_failsoft(XDM_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
