#ifndef ECU_BRAKING_ELECTRONIC_BRAKEFORCE_DISTRIBUTION_EBDDIAGNOSTICS_H
#define ECU_BRAKING_ELECTRONIC_BRAKEFORCE_DISTRIBUTION_EBDDIAGNOSTICS_H

#include "EBD.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void EBD_diagnostics_init(void);
void EBD_diagnostics_run(const EBD_State* state);
bool EBD_diagnostics_has_fault(void);
void EBD_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_ELECTRONIC_BRAKEFORCE_DISTRIBUTION_EBDDIAGNOSTICS_H */
