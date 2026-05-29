#ifndef ECU_TYRES_TIRE_CARCASS_TEMPERATURE_MODEL_TCTDIAGNOSTICS_H
#define ECU_TYRES_TIRE_CARCASS_TEMPERATURE_MODEL_TCTDIAGNOSTICS_H

#include "TCT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void TCT_diagnostics_init(void);
void TCT_diagnostics_run(const TCT_State* state);
bool TCT_diagnostics_has_fault(void);
void TCT_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_CARCASS_TEMPERATURE_MODEL_TCTDIAGNOSTICS_H */
