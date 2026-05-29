#ifndef ECU_BRAKING_BRAKE_BY_WIRE_BBWDIAGNOSTICS_H
#define ECU_BRAKING_BRAKE_BY_WIRE_BBWDIAGNOSTICS_H

#include "BBW.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void BBW_diagnostics_init(void);
void BBW_diagnostics_run(const BBW_State* state);
bool BBW_diagnostics_has_fault(void);
void BBW_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_BY_WIRE_BBWDIAGNOSTICS_H */
