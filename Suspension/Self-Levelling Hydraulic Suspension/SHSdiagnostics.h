#ifndef ECU_SUSPENSION_SELF_LEVELLING_HYDRAULIC_SUSPENSION_SHSDIAGNOSTICS_H
#define ECU_SUSPENSION_SELF_LEVELLING_HYDRAULIC_SUSPENSION_SHSDIAGNOSTICS_H

#include "SHS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void SHS_diagnostics_init(void);
void SHS_diagnostics_run(const SHS_State* state);
bool SHS_diagnostics_has_fault(void);
void SHS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_SELF_LEVELLING_HYDRAULIC_SUSPENSION_SHSDIAGNOSTICS_H */
