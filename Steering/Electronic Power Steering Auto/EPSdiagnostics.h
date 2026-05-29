#ifndef ECU_STEERING_ELECTRONIC_POWER_STEERING_AUTO_EPSDIAGNOSTICS_H
#define ECU_STEERING_ELECTRONIC_POWER_STEERING_AUTO_EPSDIAGNOSTICS_H

#include "EPS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void EPS_diagnostics_init(void);
void EPS_diagnostics_run(const EPS_State* state);
bool EPS_diagnostics_has_fault(void);
void EPS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ELECTRONIC_POWER_STEERING_AUTO_EPSDIAGNOSTICS_H */
