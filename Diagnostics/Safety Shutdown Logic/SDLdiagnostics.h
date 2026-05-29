#ifndef ECU_DIAGNOSTICS_SAFETY_SHUTDOWN_LOGIC_SDLDIAGNOSTICS_H
#define ECU_DIAGNOSTICS_SAFETY_SHUTDOWN_LOGIC_SDLDIAGNOSTICS_H

#include "SDL.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void SDL_diagnostics_init(void);
void SDL_diagnostics_run(const SDL_State* state);
bool SDL_diagnostics_has_fault(void);
void SDL_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_SAFETY_SHUTDOWN_LOGIC_SDLDIAGNOSTICS_H */
