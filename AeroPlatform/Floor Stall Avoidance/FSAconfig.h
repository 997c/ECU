#ifndef ECU_AERO_PLATFORM_FLOOR_STALL_AVOIDANCE_FSACONFIG_H
#define ECU_AERO_PLATFORM_FLOOR_STALL_AVOIDANCE_FSACONFIG_H

#include "FSA.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const FSA_Config FSA_default_config;
void FSA_config_load_defaults(FSA_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_FLOOR_STALL_AVOIDANCE_FSACONFIG_H */
