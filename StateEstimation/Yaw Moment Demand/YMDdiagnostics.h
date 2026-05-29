#ifndef ECU_STATE_ESTIMATION_YAW_MOMENT_DEMAND_YMDDIAGNOSTICS_H
#define ECU_STATE_ESTIMATION_YAW_MOMENT_DEMAND_YMDDIAGNOSTICS_H

#include "YMD.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void YMD_diagnostics_init(void);
void YMD_diagnostics_run(const YMD_State* state);
bool YMD_diagnostics_has_fault(void);
void YMD_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_YAW_MOMENT_DEMAND_YMDDIAGNOSTICS_H */
