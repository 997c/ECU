#ifndef ECU_AERO_PLATFORM_ACTIVE_PITCH_CORRECTION_APC2CONFIG_H
#define ECU_AERO_PLATFORM_ACTIVE_PITCH_CORRECTION_APC2CONFIG_H

#include "APC2.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const APC2_Config APC2_default_config;
void APC2_config_load_defaults(APC2_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_PITCH_CORRECTION_APC2CONFIG_H */
