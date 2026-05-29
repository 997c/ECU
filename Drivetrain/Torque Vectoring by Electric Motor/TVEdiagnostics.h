#ifndef ECU_DRIVETRAIN_TORQUE_VECTORING_BY_ELECTRIC_MOTOR_TVEDIAGNOSTICS_H
#define ECU_DRIVETRAIN_TORQUE_VECTORING_BY_ELECTRIC_MOTOR_TVEDIAGNOSTICS_H

#include "TVE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void TVE_diagnostics_init(void);
void TVE_diagnostics_run(const TVE_State* state);
bool TVE_diagnostics_has_fault(void);
void TVE_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_TORQUE_VECTORING_BY_ELECTRIC_MOTOR_TVEDIAGNOSTICS_H */
