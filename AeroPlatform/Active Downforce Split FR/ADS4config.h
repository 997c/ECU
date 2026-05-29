#ifndef ECU_AERO_PLATFORM_ACTIVE_DOWNFORCE_SPLIT_FR_ADS4CONFIG_H
#define ECU_AERO_PLATFORM_ACTIVE_DOWNFORCE_SPLIT_FR_ADS4CONFIG_H

#include "ADS4.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ADS4_Config ADS4_default_config;
void ADS4_config_load_defaults(ADS4_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_DOWNFORCE_SPLIT_FR_ADS4CONFIG_H */
