#ifndef ECU_HYBRID_DEPLOYMENT_STRATEGY_CONTROL_DVSDIAGNOSTICS_H
#define ECU_HYBRID_DEPLOYMENT_STRATEGY_CONTROL_DVSDIAGNOSTICS_H

#include "DVS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void DVS_diagnostics_init(void);
void DVS_diagnostics_run(const DVS_State* state);
bool DVS_diagnostics_has_fault(void);
void DVS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_DEPLOYMENT_STRATEGY_CONTROL_DVSDIAGNOSTICS_H */
