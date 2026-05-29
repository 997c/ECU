#ifndef ECU_AERO_PLATFORM_ROLL_CONTROL_RLCDIAGNOSTICS_H
#define ECU_AERO_PLATFORM_ROLL_CONTROL_RLCDIAGNOSTICS_H

#include "RLC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void RLC_diagnostics_init(void);
void RLC_diagnostics_run(const RLC_State* state);
bool RLC_diagnostics_has_fault(void);
void RLC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ROLL_CONTROL_RLCDIAGNOSTICS_H */
