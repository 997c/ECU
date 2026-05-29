#ifndef ECU_AERO_PLATFORM_FLOOR_STALL_AVOIDANCE_FSADIAGNOSTICS_H
#define ECU_AERO_PLATFORM_FLOOR_STALL_AVOIDANCE_FSADIAGNOSTICS_H

#include "FSA.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void FSA_diagnostics_init(void);
void FSA_diagnostics_run(const FSA_State* state);
bool FSA_diagnostics_has_fault(void);
void FSA_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_FLOOR_STALL_AVOIDANCE_FSADIAGNOSTICS_H */
