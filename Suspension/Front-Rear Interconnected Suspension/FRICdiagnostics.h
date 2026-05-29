#ifndef ECU_SUSPENSION_FRONT_REAR_INTERCONNECTED_SUSPENSION_FRICDIAGNOSTICS_H
#define ECU_SUSPENSION_FRONT_REAR_INTERCONNECTED_SUSPENSION_FRICDIAGNOSTICS_H

#include "FRIC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void FRIC_diagnostics_init(void);
void FRIC_diagnostics_run(const FRIC_State* state);
bool FRIC_diagnostics_has_fault(void);
void FRIC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_FRONT_REAR_INTERCONNECTED_SUSPENSION_FRICDIAGNOSTICS_H */
