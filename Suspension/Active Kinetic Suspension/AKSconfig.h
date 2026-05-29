#ifndef ECU_SUSPENSION_ACTIVE_KINETIC_SUSPENSION_AKSCONFIG_H
#define ECU_SUSPENSION_ACTIVE_KINETIC_SUSPENSION_AKSCONFIG_H

#include "AKS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AKS_Config AKS_default_config;
void AKS_config_load_defaults(AKS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_KINETIC_SUSPENSION_AKSCONFIG_H */
