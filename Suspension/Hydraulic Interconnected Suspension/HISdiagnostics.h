#ifndef ECU_SUSPENSION_HYDRAULIC_INTERCONNECTED_SUSPENSION_HISDIAGNOSTICS_H
#define ECU_SUSPENSION_HYDRAULIC_INTERCONNECTED_SUSPENSION_HISDIAGNOSTICS_H

#include "HIS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void HIS_diagnostics_init(void);
void HIS_diagnostics_run(const HIS_State* state);
bool HIS_diagnostics_has_fault(void);
void HIS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_HYDRAULIC_INTERCONNECTED_SUSPENSION_HISDIAGNOSTICS_H */
