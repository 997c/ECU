#include "VTGsafety.h"
#include <string.h>

bool VTG_safety_check(const VehicleState* vs, const VTG_State* state) {
    (void)vs; (void)state;
    /* TODO: VTG safety limits for Variable Turbine Geometry */
    return true;
}

void VTG_safety_enter_failsoft(VTG_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
