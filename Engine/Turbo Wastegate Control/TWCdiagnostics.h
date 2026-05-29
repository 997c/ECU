#ifndef ECU_ENGINE_TURBO_WASTEGATE_CONTROL_TWCDIAGNOSTICS_H
#define ECU_ENGINE_TURBO_WASTEGATE_CONTROL_TWCDIAGNOSTICS_H

#include "TWC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void TWC_diagnostics_init(void);
void TWC_diagnostics_run(const TWC_State* state);
bool TWC_diagnostics_has_fault(void);
void TWC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_TURBO_WASTEGATE_CONTROL_TWCDIAGNOSTICS_H */
