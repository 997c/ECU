#ifndef ECU_BRAKING_CORNERING_BRAKE_CONTROL_CBCDIAGNOSTICS_H
#define ECU_BRAKING_CORNERING_BRAKE_CONTROL_CBCDIAGNOSTICS_H

#include "CBC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void CBC_diagnostics_init(void);
void CBC_diagnostics_run(const CBC_State* state);
bool CBC_diagnostics_has_fault(void);
void CBC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_CORNERING_BRAKE_CONTROL_CBCDIAGNOSTICS_H */
