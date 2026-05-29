#ifndef ECU_DIAGNOSTICS_LIMP_MODE_FALLBACK_LOGIC_LMPDIAGNOSTICS_H
#define ECU_DIAGNOSTICS_LIMP_MODE_FALLBACK_LOGIC_LMPDIAGNOSTICS_H

#include "LMP.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void LMP_diagnostics_init(void);
void LMP_diagnostics_run(const LMP_State* state);
bool LMP_diagnostics_has_fault(void);
void LMP_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_LIMP_MODE_FALLBACK_LOGIC_LMPDIAGNOSTICS_H */
