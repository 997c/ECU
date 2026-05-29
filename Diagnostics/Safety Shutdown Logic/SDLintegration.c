#include "SDLintegration.h"
#include <string.h>

static SDL_State SDL_g_int_state;

void SDL_integration_init(void) {
    memset(&SDL_g_int_state, 0, sizeof(SDL_g_int_state));
}

void SDL_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    SDL_update(dt_ms, &bridge->state, &SDL_g_int_state, out);
    /* TODO: map SDL outputs to global actuators (Safety Shutdown Logic) */
}
