#ifndef ECU_SUSPENSION_ACTIVE_BODY_CONTROL_ABCDIAGNOSTICS_H
#define ECU_SUSPENSION_ACTIVE_BODY_CONTROL_ABCDIAGNOSTICS_H

#include "ABC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ABC_diagnostics_init(void);
void ABC_diagnostics_run(const ABC_State* state);
bool ABC_diagnostics_has_fault(void);
void ABC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_BODY_CONTROL_ABCDIAGNOSTICS_H */
