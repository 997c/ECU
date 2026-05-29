#ifndef ECU_AERO_PLATFORM_HEAVE_CONTROL_HVCCONFIG_H
#define ECU_AERO_PLATFORM_HEAVE_CONTROL_HVCCONFIG_H

#include "HVC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const HVC_Config HVC_default_config;
void HVC_config_load_defaults(HVC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_HEAVE_CONTROL_HVCCONFIG_H */
