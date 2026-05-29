#ifndef ECU_SUSPENSION_ACTIVE_DIVE_SUPPRESSION_ADS2DIAGNOSTICS_H
#define ECU_SUSPENSION_ACTIVE_DIVE_SUPPRESSION_ADS2DIAGNOSTICS_H

#include "ADS2.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ADS2_diagnostics_init(void);
void ADS2_diagnostics_run(const ADS2_State* state);
bool ADS2_diagnostics_has_fault(void);
void ADS2_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_DIVE_SUPPRESSION_ADS2DIAGNOSTICS_H */
