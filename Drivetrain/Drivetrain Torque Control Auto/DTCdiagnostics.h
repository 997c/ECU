#ifndef ECU_DRIVETRAIN_DRIVETRAIN_TORQUE_CONTROL_AUTO_DTCDIAGNOSTICS_H
#define ECU_DRIVETRAIN_DRIVETRAIN_TORQUE_CONTROL_AUTO_DTCDIAGNOSTICS_H

#include "DTC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void DTC_diagnostics_init(void);
void DTC_diagnostics_run(const DTC_State* state);
bool DTC_diagnostics_has_fault(void);
void DTC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_DRIVETRAIN_TORQUE_CONTROL_AUTO_DTCDIAGNOSTICS_H */
