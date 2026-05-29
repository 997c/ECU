#ifndef ECU_AERO_PLATFORM_PITCH_CONTROL_PTCCONFIG_H
#define ECU_AERO_PLATFORM_PITCH_CONTROL_PTCCONFIG_H

#include "PTC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const PTC_Config PTC_default_config;
void PTC_config_load_defaults(PTC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_PITCH_CONTROL_PTCCONFIG_H */
