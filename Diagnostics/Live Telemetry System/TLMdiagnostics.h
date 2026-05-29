#ifndef ECU_DIAGNOSTICS_LIVE_TELEMETRY_SYSTEM_TLMDIAGNOSTICS_H
#define ECU_DIAGNOSTICS_LIVE_TELEMETRY_SYSTEM_TLMDIAGNOSTICS_H

#include "TLM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void TLM_diagnostics_init(void);
void TLM_diagnostics_run(const TLM_State* state);
bool TLM_diagnostics_has_fault(void);
void TLM_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_LIVE_TELEMETRY_SYSTEM_TLMDIAGNOSTICS_H */
