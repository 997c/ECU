#include "SDLsafety.h"
#include <string.h>

bool SDL_safety_check(const VehicleState* vs, const SDL_State* state) {
    (void)vs; (void)state;
    /* TODO: SDL safety limits for Safety Shutdown Logic */
    return true;
}

void SDL_safety_enter_failsoft(SDL_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
