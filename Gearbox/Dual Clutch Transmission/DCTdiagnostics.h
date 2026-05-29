#ifndef ECU_GEARBOX_DUAL_CLUTCH_TRANSMISSION_DCTDIAGNOSTICS_H
#define ECU_GEARBOX_DUAL_CLUTCH_TRANSMISSION_DCTDIAGNOSTICS_H

#include "DCT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void DCT_diagnostics_init(void);
void DCT_diagnostics_run(const DCT_State* state);
bool DCT_diagnostics_has_fault(void);
void DCT_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_DUAL_CLUTCH_TRANSMISSION_DCTDIAGNOSTICS_H */
