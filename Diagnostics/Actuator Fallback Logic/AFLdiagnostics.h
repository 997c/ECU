#ifndef ECU_DIAGNOSTICS_ACTUATOR_FALLBACK_LOGIC_AFLDIAGNOSTICS_H
#define ECU_DIAGNOSTICS_ACTUATOR_FALLBACK_LOGIC_AFLDIAGNOSTICS_H

#include "AFL.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AFL_diagnostics_init(void);
void AFL_diagnostics_run(const AFL_State* state);
bool AFL_diagnostics_has_fault(void);
void AFL_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_ACTUATOR_FALLBACK_LOGIC_AFLDIAGNOSTICS_H */
