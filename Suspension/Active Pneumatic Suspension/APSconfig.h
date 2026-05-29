#ifndef ECU_SUSPENSION_ACTIVE_PNEUMATIC_SUSPENSION_APSCONFIG_H
#define ECU_SUSPENSION_ACTIVE_PNEUMATIC_SUSPENSION_APSCONFIG_H

#include "APS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const APS_Config APS_default_config;
void APS_config_load_defaults(APS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_PNEUMATIC_SUSPENSION_APSCONFIG_H */
