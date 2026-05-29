#ifndef ECU_BRAKING_BRAKE_PEDAL_TRAVEL_MAPPING_BPMDIAGNOSTICS_H
#define ECU_BRAKING_BRAKE_PEDAL_TRAVEL_MAPPING_BPMDIAGNOSTICS_H

#include "BPM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void BPM_diagnostics_init(void);
void BPM_diagnostics_run(const BPM_State* state);
bool BPM_diagnostics_has_fault(void);
void BPM_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_PEDAL_TRAVEL_MAPPING_BPMDIAGNOSTICS_H */
