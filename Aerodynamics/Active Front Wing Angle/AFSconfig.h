#ifndef ECU_AERODYNAMICS_ACTIVE_FRONT_WING_ANGLE_AFSCONFIG_H
#define ECU_AERODYNAMICS_ACTIVE_FRONT_WING_ANGLE_AFSCONFIG_H

#include "AFS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AFS_Config AFS_default_config;
void AFS_config_load_defaults(AFS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_FRONT_WING_ANGLE_AFSCONFIG_H */
