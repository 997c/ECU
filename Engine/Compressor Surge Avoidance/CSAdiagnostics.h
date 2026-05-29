#ifndef ECU_ENGINE_COMPRESSOR_SURGE_AVOIDANCE_CSADIAGNOSTICS_H
#define ECU_ENGINE_COMPRESSOR_SURGE_AVOIDANCE_CSADIAGNOSTICS_H

#include "CSA.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void CSA_diagnostics_init(void);
void CSA_diagnostics_run(const CSA_State* state);
bool CSA_diagnostics_has_fault(void);
void CSA_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_COMPRESSOR_SURGE_AVOIDANCE_CSADIAGNOSTICS_H */
