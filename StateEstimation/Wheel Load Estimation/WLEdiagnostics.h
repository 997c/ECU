#ifndef ECU_STATE_ESTIMATION_WHEEL_LOAD_ESTIMATION_WLEDIAGNOSTICS_H
#define ECU_STATE_ESTIMATION_WHEEL_LOAD_ESTIMATION_WLEDIAGNOSTICS_H

#include "WLE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void WLE_diagnostics_init(void);
void WLE_diagnostics_run(const WLE_State* state);
bool WLE_diagnostics_has_fault(void);
void WLE_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_WHEEL_LOAD_ESTIMATION_WLEDIAGNOSTICS_H */
