#ifndef ECU_HYBRID_REGENERATIVE_BRAKE_ASSIST_AUTO_RBADIAGNOSTICS_H
#define ECU_HYBRID_REGENERATIVE_BRAKE_ASSIST_AUTO_RBADIAGNOSTICS_H

#include "RBA.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void RBA_diagnostics_init(void);
void RBA_diagnostics_run(const RBA_State* state);
bool RBA_diagnostics_has_fault(void);
void RBA_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_REGENERATIVE_BRAKE_ASSIST_AUTO_RBADIAGNOSTICS_H */
