#ifndef ECU_ENGINE_TORQUE_SHAPING_TQSDIAGNOSTICS_H
#define ECU_ENGINE_TORQUE_SHAPING_TQSDIAGNOSTICS_H

#include "TQS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void TQS_diagnostics_init(void);
void TQS_diagnostics_run(const TQS_State* state);
bool TQS_diagnostics_has_fault(void);
void TQS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_TORQUE_SHAPING_TQSDIAGNOSTICS_H */
