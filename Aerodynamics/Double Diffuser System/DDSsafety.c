#include "DDSsafety.h"
#include <string.h>

bool DDS_safety_check(const VehicleState* vs, const DDS_State* state) {
    (void)vs; (void)state;
    /* TODO: DDS safety limits for Double Diffuser System */
    return true;
}

void DDS_safety_enter_failsoft(DDS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
