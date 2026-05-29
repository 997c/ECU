#ifndef ECU_STATE_ESTIMATION_VEHICLE_SPEED_ESTIMATION_VSECONFIG_H
#define ECU_STATE_ESTIMATION_VEHICLE_SPEED_ESTIMATION_VSECONFIG_H

#include "VSE.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const VSE_Config VSE_default_config;
void VSE_config_load_defaults(VSE_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_VEHICLE_SPEED_ESTIMATION_VSECONFIG_H */
