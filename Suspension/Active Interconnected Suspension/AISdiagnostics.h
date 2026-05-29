#ifndef ECU_SUSPENSION_ACTIVE_INTERCONNECTED_SUSPENSION_AISDIAGNOSTICS_H
#define ECU_SUSPENSION_ACTIVE_INTERCONNECTED_SUSPENSION_AISDIAGNOSTICS_H

#include "AIS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AIS_diagnostics_init(void);
void AIS_diagnostics_run(const AIS_State* state);
bool AIS_diagnostics_has_fault(void);
void AIS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_INTERCONNECTED_SUSPENSION_AISDIAGNOSTICS_H */
