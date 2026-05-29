#ifndef ECU_AERODYNAMICS_GROUND_EFFECT_SLIDING_SKIRTS_GESDIAGNOSTICS_H
#define ECU_AERODYNAMICS_GROUND_EFFECT_SLIDING_SKIRTS_GESDIAGNOSTICS_H

#include "GES.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void GES_diagnostics_init(void);
void GES_diagnostics_run(const GES_State* state);
bool GES_diagnostics_has_fault(void);
void GES_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_GROUND_EFFECT_SLIDING_SKIRTS_GESDIAGNOSTICS_H */
