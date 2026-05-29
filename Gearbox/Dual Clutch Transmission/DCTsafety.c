#include "DCTsafety.h"
#include <string.h>

bool DCT_safety_check(const VehicleState* vs, const DCT_State* state) {
    (void)vs; (void)state;
    /* TODO: DCT safety limits for Dual Clutch Transmission */
    return true;
}

void DCT_safety_enter_failsoft(DCT_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
