#ifndef ECU_ENGINE_ELECTRONIC_THROTTLE_CONTROL_ETCDIAGNOSTICS_H
#define ECU_ENGINE_ELECTRONIC_THROTTLE_CONTROL_ETCDIAGNOSTICS_H

#include "ETC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ETC_diagnostics_init(void);
void ETC_diagnostics_run(const ETC_State* state);
bool ETC_diagnostics_has_fault(void);
void ETC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ELECTRONIC_THROTTLE_CONTROL_ETCDIAGNOSTICS_H */
