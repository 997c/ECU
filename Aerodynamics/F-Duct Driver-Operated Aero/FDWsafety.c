#include "FDWsafety.h"
#include <string.h>

bool FDW_safety_check(const VehicleState* vs, const FDW_State* state) {
    (void)vs; (void)state;
    /* TODO: FDW safety limits for F-Duct Driver-Operated Aero */
    return true;
}

void FDW_safety_enter_failsoft(FDW_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
