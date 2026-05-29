#include "DLGsafety.h"
#include <string.h>

bool DLG_safety_check(const VehicleState* vs, const DLG_State* state) {
    (void)vs; (void)state;
    /* TODO: DLG safety limits for Onboard Data Logging */
    return true;
}

void DLG_safety_enter_failsoft(DLG_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
