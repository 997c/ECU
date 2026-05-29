#ifndef ECU_SUSPENSION_ACTIVE_ANTI_ROLL_AARCONFIG_H
#define ECU_SUSPENSION_ACTIVE_ANTI_ROLL_AARCONFIG_H

#include "AAR.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AAR_Config AAR_default_config;
void AAR_config_load_defaults(AAR_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_ANTI_ROLL_AARCONFIG_H */
