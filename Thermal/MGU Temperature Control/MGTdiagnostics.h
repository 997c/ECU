#ifndef ECU_THERMAL_MGU_TEMPERATURE_CONTROL_MGTDIAGNOSTICS_H
#define ECU_THERMAL_MGU_TEMPERATURE_CONTROL_MGTDIAGNOSTICS_H

#include "MGT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void MGT_diagnostics_init(void);
void MGT_diagnostics_run(const MGT_State* state);
bool MGT_diagnostics_has_fault(void);
void MGT_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_MGU_TEMPERATURE_CONTROL_MGTDIAGNOSTICS_H */
