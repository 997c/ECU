#ifndef ECU_AERO_PLATFORM_ACTIVE_BOUNCE_SUPPRESSION_ABS3CONFIG_H
#define ECU_AERO_PLATFORM_ACTIVE_BOUNCE_SUPPRESSION_ABS3CONFIG_H

#include "ABS3.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ABS3_Config ABS3_default_config;
void ABS3_config_load_defaults(ABS3_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_BOUNCE_SUPPRESSION_ABS3CONFIG_H */
