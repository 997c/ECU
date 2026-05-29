#ifndef ECU_BRAKING_AUTOMATIC_BRAKE_PRESSURE_MODULATION_ABPDIAGNOSTICS_H
#define ECU_BRAKING_AUTOMATIC_BRAKE_PRESSURE_MODULATION_ABPDIAGNOSTICS_H

#include "ABP.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ABP_diagnostics_init(void);
void ABP_diagnostics_run(const ABP_State* state);
bool ABP_diagnostics_has_fault(void);
void ABP_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_AUTOMATIC_BRAKE_PRESSURE_MODULATION_ABPDIAGNOSTICS_H */
