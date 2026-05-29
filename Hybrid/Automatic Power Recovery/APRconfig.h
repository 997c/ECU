#ifndef ECU_HYBRID_AUTOMATIC_POWER_RECOVERY_APRCONFIG_H
#define ECU_HYBRID_AUTOMATIC_POWER_RECOVERY_APRCONFIG_H

#include "APR.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const APR_Config APR_default_config;
void APR_config_load_defaults(APR_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTOMATIC_POWER_RECOVERY_APRCONFIG_H */
