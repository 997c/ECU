#ifndef ECU_DIAGNOSTICS_SAFETY_SHUTDOWN_LOGIC_SDLINTEGRATION_H
#define ECU_DIAGNOSTICS_SAFETY_SHUTDOWN_LOGIC_SDLINTEGRATION_H

#include "ecu_bridge.h"
#include "SDL.h"

#ifdef __cplusplus
extern "C" {
#endif

void SDL_integration_init(void);
void SDL_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_SAFETY_SHUTDOWN_LOGIC_SDLINTEGRATION_H */
