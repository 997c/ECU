#ifndef ECU_ENGINE_VARIABLE_COMPRESSION_RATIO_VCRDIAGNOSTICS_H
#define ECU_ENGINE_VARIABLE_COMPRESSION_RATIO_VCRDIAGNOSTICS_H

#include "VCR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void VCR_diagnostics_init(void);
void VCR_diagnostics_run(const VCR_State* state);
bool VCR_diagnostics_has_fault(void);
void VCR_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_COMPRESSION_RATIO_VCRDIAGNOSTICS_H */
