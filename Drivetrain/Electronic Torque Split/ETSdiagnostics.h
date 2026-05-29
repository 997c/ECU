#ifndef ECU_DRIVETRAIN_ELECTRONIC_TORQUE_SPLIT_ETSDIAGNOSTICS_H
#define ECU_DRIVETRAIN_ELECTRONIC_TORQUE_SPLIT_ETSDIAGNOSTICS_H

#include "ETS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ETS_diagnostics_init(void);
void ETS_diagnostics_run(const ETS_State* state);
bool ETS_diagnostics_has_fault(void);
void ETS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ELECTRONIC_TORQUE_SPLIT_ETSDIAGNOSTICS_H */
