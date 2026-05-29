#ifndef ECU_THERMAL_BATTERY_THERMAL_MANAGEMENT_BTMDIAGNOSTICS_H
#define ECU_THERMAL_BATTERY_THERMAL_MANAGEMENT_BTMDIAGNOSTICS_H

#include "BTM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void BTM_diagnostics_init(void);
void BTM_diagnostics_run(const BTM_State* state);
bool BTM_diagnostics_has_fault(void);
void BTM_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_BATTERY_THERMAL_MANAGEMENT_BTMDIAGNOSTICS_H */
