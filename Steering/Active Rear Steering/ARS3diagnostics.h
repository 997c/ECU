#ifndef ECU_STEERING_ACTIVE_REAR_STEERING_ARS3DIAGNOSTICS_H
#define ECU_STEERING_ACTIVE_REAR_STEERING_ARS3DIAGNOSTICS_H

#include "ARS3.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ARS3_diagnostics_init(void);
void ARS3_diagnostics_run(const ARS3_State* state);
bool ARS3_diagnostics_has_fault(void);
void ARS3_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ACTIVE_REAR_STEERING_ARS3DIAGNOSTICS_H */
