#ifndef ECU_TRACTION_LIMITED_SLIP_CONTROL_ELECTRONIC_LSCDIAGNOSTICS_H
#define ECU_TRACTION_LIMITED_SLIP_CONTROL_ELECTRONIC_LSCDIAGNOSTICS_H

#include "LSC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void LSC_diagnostics_init(void);
void LSC_diagnostics_run(const LSC_State* state);
bool LSC_diagnostics_has_fault(void);
void LSC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_LIMITED_SLIP_CONTROL_ELECTRONIC_LSCDIAGNOSTICS_H */
