#ifndef ECU_THERMAL_TYRE_TEMPERATURE_MANAGEMENT_TYTDIAGNOSTICS_H
#define ECU_THERMAL_TYRE_TEMPERATURE_MANAGEMENT_TYTDIAGNOSTICS_H

#include "TYT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void TYT_diagnostics_init(void);
void TYT_diagnostics_run(const TYT_State* state);
bool TYT_diagnostics_has_fault(void);
void TYT_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_TYRE_TEMPERATURE_MANAGEMENT_TYTDIAGNOSTICS_H */
