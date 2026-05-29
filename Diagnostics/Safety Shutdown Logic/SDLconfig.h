#ifndef ECU_DIAGNOSTICS_SAFETY_SHUTDOWN_LOGIC_SDLCONFIG_H
#define ECU_DIAGNOSTICS_SAFETY_SHUTDOWN_LOGIC_SDLCONFIG_H

#include "SDL.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const SDL_Config SDL_default_config;
void SDL_config_load_defaults(SDL_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_SAFETY_SHUTDOWN_LOGIC_SDLCONFIG_H */
