#ifndef ECU_AERODYNAMICS_GROUND_EFFECT_ACTIVE_SEALING_GASDIAGNOSTICS_H
#define ECU_AERODYNAMICS_GROUND_EFFECT_ACTIVE_SEALING_GASDIAGNOSTICS_H

#include "GAS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void GAS_diagnostics_init(void);
void GAS_diagnostics_run(const GAS_State* state);
bool GAS_diagnostics_has_fault(void);
void GAS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_GROUND_EFFECT_ACTIVE_SEALING_GASDIAGNOSTICS_H */
