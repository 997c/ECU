#ifndef ECU_AERODYNAMICS_ACTIVE_AERODYNAMICS_PORSCHE_STYLE_PAADIAGNOSTICS_H
#define ECU_AERODYNAMICS_ACTIVE_AERODYNAMICS_PORSCHE_STYLE_PAADIAGNOSTICS_H

#include "PAA.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void PAA_diagnostics_init(void);
void PAA_diagnostics_run(const PAA_State* state);
bool PAA_diagnostics_has_fault(void);
void PAA_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_AERODYNAMICS_PORSCHE_STYLE_PAADIAGNOSTICS_H */
