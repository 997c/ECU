#include "BPMsafety.h"
#include <string.h>

bool BPM_safety_check(const VehicleState* vs, const BPM_State* state) {
    (void)vs; (void)state;
    /* TODO: BPM safety limits for Brake Pedal Travel Mapping */
    return true;
}

void BPM_safety_enter_failsoft(BPM_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
