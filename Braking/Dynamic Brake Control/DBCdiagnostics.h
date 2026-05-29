#ifndef ECU_BRAKING_DYNAMIC_BRAKE_CONTROL_DBCDIAGNOSTICS_H
#define ECU_BRAKING_DYNAMIC_BRAKE_CONTROL_DBCDIAGNOSTICS_H

#include "DBC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void DBC_diagnostics_init(void);
void DBC_diagnostics_run(const DBC_State* state);
bool DBC_diagnostics_has_fault(void);
void DBC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_DYNAMIC_BRAKE_CONTROL_DBCDIAGNOSTICS_H */
