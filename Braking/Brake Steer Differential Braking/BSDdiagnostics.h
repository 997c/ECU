#ifndef ECU_BRAKING_BRAKE_STEER_DIFFERENTIAL_BRAKING_BSDDIAGNOSTICS_H
#define ECU_BRAKING_BRAKE_STEER_DIFFERENTIAL_BRAKING_BSDDIAGNOSTICS_H

#include "BSD.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void BSD_diagnostics_init(void);
void BSD_diagnostics_run(const BSD_State* state);
bool BSD_diagnostics_has_fault(void);
void BSD_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_STEER_DIFFERENTIAL_BRAKING_BSDDIAGNOSTICS_H */
