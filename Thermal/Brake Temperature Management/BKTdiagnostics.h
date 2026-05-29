#ifndef ECU_THERMAL_BRAKE_TEMPERATURE_MANAGEMENT_BKTDIAGNOSTICS_H
#define ECU_THERMAL_BRAKE_TEMPERATURE_MANAGEMENT_BKTDIAGNOSTICS_H

#include "BKT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void BKT_diagnostics_init(void);
void BKT_diagnostics_run(const BKT_State* state);
bool BKT_diagnostics_has_fault(void);
void BKT_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_BRAKE_TEMPERATURE_MANAGEMENT_BKTDIAGNOSTICS_H */
