#ifndef ECU_DRIVETRAIN_ENGINE_BRAKE_MAP_EBMDIAGNOSTICS_H
#define ECU_DRIVETRAIN_ENGINE_BRAKE_MAP_EBMDIAGNOSTICS_H

#include "EBM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void EBM_diagnostics_init(void);
void EBM_diagnostics_run(const EBM_State* state);
bool EBM_diagnostics_has_fault(void);
void EBM_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ENGINE_BRAKE_MAP_EBMDIAGNOSTICS_H */
