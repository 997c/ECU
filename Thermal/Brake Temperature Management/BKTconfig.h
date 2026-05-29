#ifndef ECU_THERMAL_BRAKE_TEMPERATURE_MANAGEMENT_BKTCONFIG_H
#define ECU_THERMAL_BRAKE_TEMPERATURE_MANAGEMENT_BKTCONFIG_H

#include "BKT.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const BKT_Config BKT_default_config;
void BKT_config_load_defaults(BKT_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_BRAKE_TEMPERATURE_MANAGEMENT_BKTCONFIG_H */
