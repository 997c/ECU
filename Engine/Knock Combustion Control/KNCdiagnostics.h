#ifndef ECU_ENGINE_KNOCK_COMBUSTION_CONTROL_KNCDIAGNOSTICS_H
#define ECU_ENGINE_KNOCK_COMBUSTION_CONTROL_KNCDIAGNOSTICS_H

#include "KNC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void KNC_diagnostics_init(void);
void KNC_diagnostics_run(const KNC_State* state);
bool KNC_diagnostics_has_fault(void);
void KNC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_KNOCK_COMBUSTION_CONTROL_KNCDIAGNOSTICS_H */
