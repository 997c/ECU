#ifndef ECU_HYBRID_LAP_ENERGY_OPTIMIZATION_LEODIAGNOSTICS_H
#define ECU_HYBRID_LAP_ENERGY_OPTIMIZATION_LEODIAGNOSTICS_H

#include "LEO.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void LEO_diagnostics_init(void);
void LEO_diagnostics_run(const LEO_State* state);
bool LEO_diagnostics_has_fault(void);
void LEO_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_LAP_ENERGY_OPTIMIZATION_LEODIAGNOSTICS_H */
