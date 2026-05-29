#ifndef ECU_HYBRID_MGU_K_TORQUE_BLEND_CONTROL_MGKDIAGNOSTICS_H
#define ECU_HYBRID_MGU_K_TORQUE_BLEND_CONTROL_MGKDIAGNOSTICS_H

#include "MGK.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void MGK_diagnostics_init(void);
void MGK_diagnostics_run(const MGK_State* state);
bool MGK_diagnostics_has_fault(void);
void MGK_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_MGU_K_TORQUE_BLEND_CONTROL_MGKDIAGNOSTICS_H */
