#ifndef ECU_BRAKING_BRAKE_MIGRATION_SHAPING_BMSCONFIG_H
#define ECU_BRAKING_BRAKE_MIGRATION_SHAPING_BMSCONFIG_H

#include "BMS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const BMS_Config BMS_default_config;
void BMS_config_load_defaults(BMS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_MIGRATION_SHAPING_BMSCONFIG_H */
