#ifndef ECU_THERMAL_INTERCOOLER_CHARGE_AIR_THERMAL_ICTDIAGNOSTICS_H
#define ECU_THERMAL_INTERCOOLER_CHARGE_AIR_THERMAL_ICTDIAGNOSTICS_H

#include "ICT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ICT_diagnostics_init(void);
void ICT_diagnostics_run(const ICT_State* state);
bool ICT_diagnostics_has_fault(void);
void ICT_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_INTERCOOLER_CHARGE_AIR_THERMAL_ICTDIAGNOSTICS_H */
