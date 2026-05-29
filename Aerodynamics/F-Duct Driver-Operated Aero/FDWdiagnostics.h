#ifndef ECU_AERODYNAMICS_F_DUCT_DRIVER_OPERATED_AERO_FDWDIAGNOSTICS_H
#define ECU_AERODYNAMICS_F_DUCT_DRIVER_OPERATED_AERO_FDWDIAGNOSTICS_H

#include "FDW.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void FDW_diagnostics_init(void);
void FDW_diagnostics_run(const FDW_State* state);
bool FDW_diagnostics_has_fault(void);
void FDW_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_F_DUCT_DRIVER_OPERATED_AERO_FDWDIAGNOSTICS_H */
