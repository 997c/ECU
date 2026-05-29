#ifndef ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_FRONT_ARHCONFIG_H
#define ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_FRONT_ARHCONFIG_H

#include "ARH.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ARH_Config ARH_default_config;
void ARH_config_load_defaults(ARH_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_FRONT_ARHCONFIG_H */
