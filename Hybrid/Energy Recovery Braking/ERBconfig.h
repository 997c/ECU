#ifndef ECU_HYBRID_ENERGY_RECOVERY_BRAKING_ERBCONFIG_H
#define ECU_HYBRID_ENERGY_RECOVERY_BRAKING_ERBCONFIG_H

#include "ERB.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ERB_Config ERB_default_config;
void ERB_config_load_defaults(ERB_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_ENERGY_RECOVERY_BRAKING_ERBCONFIG_H */
