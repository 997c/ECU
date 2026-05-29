#ifndef ECU_STABILITY_YAW_RATE_CONTROL_YRCDIAGNOSTICS_H
#define ECU_STABILITY_YAW_RATE_CONTROL_YRCDIAGNOSTICS_H

#include "YRC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void YRC_diagnostics_init(void);
void YRC_diagnostics_run(const YRC_State* state);
bool YRC_diagnostics_has_fault(void);
void YRC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_YAW_RATE_CONTROL_YRCDIAGNOSTICS_H */
