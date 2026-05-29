#ifndef ECU_BRAKING_ANTI_LOCK_BRAKING_SYSTEM_ABSCONFIG_H
#define ECU_BRAKING_ANTI_LOCK_BRAKING_SYSTEM_ABSCONFIG_H

#include "ABS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ABS_Config ABS_default_config;
void ABS_config_load_defaults(ABS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_ANTI_LOCK_BRAKING_SYSTEM_ABSCONFIG_H */
