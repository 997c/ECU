#include "FDTsafety.h"
#include <string.h>

bool FDT_safety_check(const VehicleState* vs, const FDT_State* state) {
    (void)vs; (void)state;
    /* TODO: FDT safety limits for Fault Detection */
    return true;
}

void FDT_safety_enter_failsoft(FDT_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
