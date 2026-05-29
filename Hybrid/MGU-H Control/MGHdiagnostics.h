#ifndef ECU_HYBRID_MGU_H_CONTROL_MGHDIAGNOSTICS_H
#define ECU_HYBRID_MGU_H_CONTROL_MGHDIAGNOSTICS_H

#include "MGH.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void MGH_diagnostics_init(void);
void MGH_diagnostics_run(const MGH_State* state);
bool MGH_diagnostics_has_fault(void);
void MGH_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_MGU_H_CONTROL_MGHDIAGNOSTICS_H */
