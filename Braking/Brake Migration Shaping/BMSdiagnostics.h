#ifndef ECU_BRAKING_BRAKE_MIGRATION_SHAPING_BMSDIAGNOSTICS_H
#define ECU_BRAKING_BRAKE_MIGRATION_SHAPING_BMSDIAGNOSTICS_H

#include "BMS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void BMS_diagnostics_init(void);
void BMS_diagnostics_run(const BMS_State* state);
bool BMS_diagnostics_has_fault(void);
void BMS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_MIGRATION_SHAPING_BMSDIAGNOSTICS_H */
