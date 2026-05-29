#ifndef ECU_SUSPENSION_ACTIVE_VEHICLE_SQUAT_CONTROL_AVSDIAGNOSTICS_H
#define ECU_SUSPENSION_ACTIVE_VEHICLE_SQUAT_CONTROL_AVSDIAGNOSTICS_H

#include "AVS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AVS_diagnostics_init(void);
void AVS_diagnostics_run(const AVS_State* state);
bool AVS_diagnostics_has_fault(void);
void AVS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_VEHICLE_SQUAT_CONTROL_AVSDIAGNOSTICS_H */
