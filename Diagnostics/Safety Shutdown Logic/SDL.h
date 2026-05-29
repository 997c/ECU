#ifndef ECU_DIAGNOSTICS_SAFETY_SHUTDOWN_LOGIC_SDL_H
#define ECU_DIAGNOSTICS_SAFETY_SHUTDOWN_LOGIC_SDL_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SDL - Safety Shutdown Logic (Diagnostics) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} SDL_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} SDL_State;

void SDL_init(const SDL_Config* cfg);
void SDL_update(float dt_ms, const VehicleState* vs, SDL_State* state, ActuatorCommands* out);
void SDL_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_SAFETY_SHUTDOWN_LOGIC_SDL_H */
