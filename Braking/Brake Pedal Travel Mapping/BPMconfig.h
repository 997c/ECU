#ifndef ECU_BRAKING_BRAKE_PEDAL_TRAVEL_MAPPING_BPMCONFIG_H
#define ECU_BRAKING_BRAKE_PEDAL_TRAVEL_MAPPING_BPMCONFIG_H

#include "BPM.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const BPM_Config BPM_default_config;
void BPM_config_load_defaults(BPM_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_PEDAL_TRAVEL_MAPPING_BPMCONFIG_H */
