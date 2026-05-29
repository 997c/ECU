#ifndef ECU_HYBRID_AUTO_KINETIC_RECOVERY_AKRCONFIG_H
#define ECU_HYBRID_AUTO_KINETIC_RECOVERY_AKRCONFIG_H

#include "AKR.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AKR_Config AKR_default_config;
void AKR_config_load_defaults(AKR_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTO_KINETIC_RECOVERY_AKRCONFIG_H */
