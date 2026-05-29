#ifndef ECU_TRACTION_TRACTION_CONTROL_SYSTEM_TCSDIAGNOSTICS_H
#define ECU_TRACTION_TRACTION_CONTROL_SYSTEM_TCSDIAGNOSTICS_H

#include "TCS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void TCS_diagnostics_init(void);
void TCS_diagnostics_run(const TCS_State* state);
bool TCS_diagnostics_has_fault(void);
void TCS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_TRACTION_CONTROL_SYSTEM_TCSDIAGNOSTICS_H */
