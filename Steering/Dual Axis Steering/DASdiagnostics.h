#ifndef ECU_STEERING_DUAL_AXIS_STEERING_DASDIAGNOSTICS_H
#define ECU_STEERING_DUAL_AXIS_STEERING_DASDIAGNOSTICS_H

#include "DAS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void DAS_diagnostics_init(void);
void DAS_diagnostics_run(const DAS_State* state);
bool DAS_diagnostics_has_fault(void);
void DAS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_DUAL_AXIS_STEERING_DASDIAGNOSTICS_H */
