#ifndef ECU_AERODYNAMICS_OFF_THROTTLE_BLOWN_DIFFUSER_OWGDIAGNOSTICS_H
#define ECU_AERODYNAMICS_OFF_THROTTLE_BLOWN_DIFFUSER_OWGDIAGNOSTICS_H

#include "OWG.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void OWG_diagnostics_init(void);
void OWG_diagnostics_run(const OWG_State* state);
bool OWG_diagnostics_has_fault(void);
void OWG_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_OFF_THROTTLE_BLOWN_DIFFUSER_OWGDIAGNOSTICS_H */
