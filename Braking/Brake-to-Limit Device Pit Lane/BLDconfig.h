#ifndef ECU_BRAKING_BRAKE_TO_LIMIT_DEVICE_PIT_LANE_BLDCONFIG_H
#define ECU_BRAKING_BRAKE_TO_LIMIT_DEVICE_PIT_LANE_BLDCONFIG_H

#include "BLD.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const BLD_Config BLD_default_config;
void BLD_config_load_defaults(BLD_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_TO_LIMIT_DEVICE_PIT_LANE_BLDCONFIG_H */
