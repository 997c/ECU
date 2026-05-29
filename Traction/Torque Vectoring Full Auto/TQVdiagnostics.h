#ifndef ECU_TRACTION_TORQUE_VECTORING_FULL_AUTO_TQVDIAGNOSTICS_H
#define ECU_TRACTION_TORQUE_VECTORING_FULL_AUTO_TQVDIAGNOSTICS_H

#include "TQV.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void TQV_diagnostics_init(void);
void TQV_diagnostics_run(const TQV_State* state);
bool TQV_diagnostics_has_fault(void);
void TQV_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_TORQUE_VECTORING_FULL_AUTO_TQVDIAGNOSTICS_H */
