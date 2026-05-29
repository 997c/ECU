#ifndef ECU_SUSPENSION_ACTIVE_VEHICLE_SQUAT_CONTROL_AVSCONFIG_H
#define ECU_SUSPENSION_ACTIVE_VEHICLE_SQUAT_CONTROL_AVSCONFIG_H

#include "AVS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AVS_Config AVS_default_config;
void AVS_config_load_defaults(AVS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_VEHICLE_SQUAT_CONTROL_AVSCONFIG_H */
