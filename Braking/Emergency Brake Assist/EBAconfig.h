#ifndef ECU_BRAKING_EMERGENCY_BRAKE_ASSIST_EBACONFIG_H
#define ECU_BRAKING_EMERGENCY_BRAKE_ASSIST_EBACONFIG_H

#include "EBA.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const EBA_Config EBA_default_config;
void EBA_config_load_defaults(EBA_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_EMERGENCY_BRAKE_ASSIST_EBACONFIG_H */
