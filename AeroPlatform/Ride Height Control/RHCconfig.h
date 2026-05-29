#ifndef ECU_AERO_PLATFORM_RIDE_HEIGHT_CONTROL_RHCCONFIG_H
#define ECU_AERO_PLATFORM_RIDE_HEIGHT_CONTROL_RHCCONFIG_H

#include "RHC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const RHC_Config RHC_default_config;
void RHC_config_load_defaults(RHC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_RIDE_HEIGHT_CONTROL_RHCCONFIG_H */
