#ifndef ECU_SUSPENSION_ACTIVE_SPRING_STIFFNESS_CONTROL_ASSDIAGNOSTICS_H
#define ECU_SUSPENSION_ACTIVE_SPRING_STIFFNESS_CONTROL_ASSDIAGNOSTICS_H

#include "ASS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ASS_diagnostics_init(void);
void ASS_diagnostics_run(const ASS_State* state);
bool ASS_diagnostics_has_fault(void);
void ASS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_SPRING_STIFFNESS_CONTROL_ASSDIAGNOSTICS_H */
