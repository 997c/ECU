#ifndef ECU_DRIVETRAIN_AUTOMATIC_REV_MATCHING_ARMDIAGNOSTICS_H
#define ECU_DRIVETRAIN_AUTOMATIC_REV_MATCHING_ARMDIAGNOSTICS_H

#include "ARM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ARM_diagnostics_init(void);
void ARM_diagnostics_run(const ARM_State* state);
bool ARM_diagnostics_has_fault(void);
void ARM_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_AUTOMATIC_REV_MATCHING_ARMDIAGNOSTICS_H */
