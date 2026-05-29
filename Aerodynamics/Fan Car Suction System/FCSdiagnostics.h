#ifndef ECU_AERODYNAMICS_FAN_CAR_SUCTION_SYSTEM_FCSDIAGNOSTICS_H
#define ECU_AERODYNAMICS_FAN_CAR_SUCTION_SYSTEM_FCSDIAGNOSTICS_H

#include "FCS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void FCS_diagnostics_init(void);
void FCS_diagnostics_run(const FCS_State* state);
bool FCS_diagnostics_has_fault(void);
void FCS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_FAN_CAR_SUCTION_SYSTEM_FCSDIAGNOSTICS_H */
