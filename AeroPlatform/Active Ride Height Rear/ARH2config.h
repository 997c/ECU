#ifndef ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_REAR_ARH2CONFIG_H
#define ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_REAR_ARH2CONFIG_H

#include "ARH2.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ARH2_Config ARH2_default_config;
void ARH2_config_load_defaults(ARH2_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_REAR_ARH2CONFIG_H */
