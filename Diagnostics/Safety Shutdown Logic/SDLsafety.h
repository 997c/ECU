#ifndef ECU_DIAGNOSTICS_SAFETY_SHUTDOWN_LOGIC_SDLSAFETY_H
#define ECU_DIAGNOSTICS_SAFETY_SHUTDOWN_LOGIC_SDLSAFETY_H

#include "SDL.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool SDL_safety_check(const VehicleState* vs, const SDL_State* state);
void SDL_safety_enter_failsoft(SDL_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_SAFETY_SHUTDOWN_LOGIC_SDLSAFETY_H */
