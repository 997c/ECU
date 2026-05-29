#ifndef ECU_AERODYNAMICS_VARIABLE_DOWNFORCE_SYSTEM_VDSDIAGNOSTICS_H
#define ECU_AERODYNAMICS_VARIABLE_DOWNFORCE_SYSTEM_VDSDIAGNOSTICS_H

#include "VDS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void VDS_diagnostics_init(void);
void VDS_diagnostics_run(const VDS_State* state);
bool VDS_diagnostics_has_fault(void);
void VDS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_VARIABLE_DOWNFORCE_SYSTEM_VDSDIAGNOSTICS_H */
