#ifndef ECU_AERODYNAMICS_DOUBLE_DIFFUSER_SYSTEM_DDSDIAGNOSTICS_H
#define ECU_AERODYNAMICS_DOUBLE_DIFFUSER_SYSTEM_DDSDIAGNOSTICS_H

#include "DDS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void DDS_diagnostics_init(void);
void DDS_diagnostics_run(const DDS_State* state);
bool DDS_diagnostics_has_fault(void);
void DDS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_DOUBLE_DIFFUSER_SYSTEM_DDSDIAGNOSTICS_H */
