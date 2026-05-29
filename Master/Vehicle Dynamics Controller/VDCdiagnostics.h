#ifndef ECU_MASTER_VEHICLE_DYNAMICS_CONTROLLER_VDCDIAGNOSTICS_H
#define ECU_MASTER_VEHICLE_DYNAMICS_CONTROLLER_VDCDIAGNOSTICS_H

#include "VDC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void VDC_diagnostics_init(void);
void VDC_diagnostics_run(const VDC_State* state);
bool VDC_diagnostics_has_fault(void);
void VDC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_MASTER_VEHICLE_DYNAMICS_CONTROLLER_VDCDIAGNOSTICS_H */
