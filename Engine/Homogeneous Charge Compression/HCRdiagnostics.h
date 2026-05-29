#ifndef ECU_ENGINE_HOMOGENEOUS_CHARGE_COMPRESSION_HCRDIAGNOSTICS_H
#define ECU_ENGINE_HOMOGENEOUS_CHARGE_COMPRESSION_HCRDIAGNOSTICS_H

#include "HCR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void HCR_diagnostics_init(void);
void HCR_diagnostics_run(const HCR_State* state);
bool HCR_diagnostics_has_fault(void);
void HCR_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_HOMOGENEOUS_CHARGE_COMPRESSION_HCRDIAGNOSTICS_H */
