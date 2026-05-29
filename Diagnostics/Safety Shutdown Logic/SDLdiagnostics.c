#include "SDLdiagnostics.h"
#include <string.h>

static bool SDL_g_fault = false;

void SDL_diagnostics_init(void) {
    SDL_g_fault = false;
}

void SDL_diagnostics_run(const SDL_State* state) {
    (void)state;
    /* TODO: SDL diagnostic checks for Safety Shutdown Logic */
    SDL_g_fault = false;
}

bool SDL_diagnostics_has_fault(void) {
    return SDL_g_fault;
}

void SDL_diagnostics_clear(void) {
    SDL_g_fault = false;
}
