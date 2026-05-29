#ifndef ECU_BRAKING_HYDRAULIC_BRAKE_ASSIST_HBADIAGNOSTICS_H
#define ECU_BRAKING_HYDRAULIC_BRAKE_ASSIST_HBADIAGNOSTICS_H

#include "HBA.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void HBA_diagnostics_init(void);
void HBA_diagnostics_run(const HBA_State* state);
bool HBA_diagnostics_has_fault(void);
void HBA_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_HYDRAULIC_BRAKE_ASSIST_HBADIAGNOSTICS_H */
