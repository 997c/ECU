#ifndef ECU_ENGINE_ACTIVE_INTAKE_MANIFOLD_AIMCONFIG_H
#define ECU_ENGINE_ACTIVE_INTAKE_MANIFOLD_AIMCONFIG_H

#include "AIM.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AIM_Config AIM_default_config;
void AIM_config_load_defaults(AIM_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ACTIVE_INTAKE_MANIFOLD_AIMCONFIG_H */
