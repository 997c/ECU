#ifndef ECU_THERMAL_GEARBOX_HYDRAULIC_THERMAL_GBTDIAGNOSTICS_H
#define ECU_THERMAL_GEARBOX_HYDRAULIC_THERMAL_GBTDIAGNOSTICS_H

#include "GBT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void GBT_diagnostics_init(void);
void GBT_diagnostics_run(const GBT_State* state);
bool GBT_diagnostics_has_fault(void);
void GBT_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_GEARBOX_HYDRAULIC_THERMAL_GBTDIAGNOSTICS_H */
