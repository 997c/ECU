#ifndef ECU_HYBRID_REGENERATIVE_CORNERING_STRATEGY_AUTO_RCSDIAGNOSTICS_H
#define ECU_HYBRID_REGENERATIVE_CORNERING_STRATEGY_AUTO_RCSDIAGNOSTICS_H

#include "RCS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void RCS_diagnostics_init(void);
void RCS_diagnostics_run(const RCS_State* state);
bool RCS_diagnostics_has_fault(void);
void RCS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_REGENERATIVE_CORNERING_STRATEGY_AUTO_RCSDIAGNOSTICS_H */
