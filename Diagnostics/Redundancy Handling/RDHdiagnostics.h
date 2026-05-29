#ifndef ECU_DIAGNOSTICS_REDUNDANCY_HANDLING_RDHDIAGNOSTICS_H
#define ECU_DIAGNOSTICS_REDUNDANCY_HANDLING_RDHDIAGNOSTICS_H

#include "RDH.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void RDH_diagnostics_init(void);
void RDH_diagnostics_run(const RDH_State* state);
bool RDH_diagnostics_has_fault(void);
void RDH_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_REDUNDANCY_HANDLING_RDHDIAGNOSTICS_H */
