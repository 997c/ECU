#ifndef ECU_TYRES_SLIP_ANGLE_TARGET_CONTROL_SLADIAGNOSTICS_H
#define ECU_TYRES_SLIP_ANGLE_TARGET_CONTROL_SLADIAGNOSTICS_H

#include "SLA.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void SLA_diagnostics_init(void);
void SLA_diagnostics_run(const SLA_State* state);
bool SLA_diagnostics_has_fault(void);
void SLA_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_SLIP_ANGLE_TARGET_CONTROL_SLADIAGNOSTICS_H */
