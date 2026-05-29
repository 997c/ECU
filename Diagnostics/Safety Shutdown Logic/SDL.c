#include "SDL.h"
#include <string.h>

static SDL_State  SDL_g_state;
static SDL_Config SDL_g_config;

void SDL_init(const SDL_Config* cfg) {
    if (cfg) SDL_g_config = *cfg;
    else     memset(&SDL_g_config, 0, sizeof(SDL_g_config));
    memset(&SDL_g_state, 0, sizeof(SDL_g_state));
}

void SDL_update(float dt_ms, const VehicleState* vs, SDL_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) SDL_g_state = *state;
    /* TODO: implement SDL control logic for Safety Shutdown Logic */
}

void SDL_shutdown(void) {
    SDL_g_state.active = false;
}
