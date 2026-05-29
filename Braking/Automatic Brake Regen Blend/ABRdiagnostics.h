#ifndef ECU_BRAKING_AUTOMATIC_BRAKE_REGEN_BLEND_ABRDIAGNOSTICS_H
#define ECU_BRAKING_AUTOMATIC_BRAKE_REGEN_BLEND_ABRDIAGNOSTICS_H

#include "ABR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ABR_diagnostics_init(void);
void ABR_diagnostics_run(const ABR_State* state);
bool ABR_diagnostics_has_fault(void);
void ABR_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_AUTOMATIC_BRAKE_REGEN_BLEND_ABRDIAGNOSTICS_H */
