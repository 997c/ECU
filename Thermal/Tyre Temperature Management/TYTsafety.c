#include "TYTsafety.h"
#include <string.h>

bool TYT_safety_check(const VehicleState* vs, const TYT_State* state) {
    (void)vs; (void)state;
    /* TODO: TYT safety limits for Tyre Temperature Management */
    return true;
}

void TYT_safety_enter_failsoft(TYT_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
