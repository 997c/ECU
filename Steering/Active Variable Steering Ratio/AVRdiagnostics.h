#ifndef ECU_STEERING_ACTIVE_VARIABLE_STEERING_RATIO_AVRDIAGNOSTICS_H
#define ECU_STEERING_ACTIVE_VARIABLE_STEERING_RATIO_AVRDIAGNOSTICS_H

#include "AVR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AVR_diagnostics_init(void);
void AVR_diagnostics_run(const AVR_State* state);
bool AVR_diagnostics_has_fault(void);
void AVR_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ACTIVE_VARIABLE_STEERING_RATIO_AVRDIAGNOSTICS_H */
