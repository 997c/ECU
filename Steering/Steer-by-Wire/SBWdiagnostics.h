#ifndef ECU_STEERING_STEER_BY_WIRE_SBWDIAGNOSTICS_H
#define ECU_STEERING_STEER_BY_WIRE_SBWDIAGNOSTICS_H

#include "SBW.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void SBW_diagnostics_init(void);
void SBW_diagnostics_run(const SBW_State* state);
bool SBW_diagnostics_has_fault(void);
void SBW_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_STEER_BY_WIRE_SBWDIAGNOSTICS_H */
