#ifndef ECU_THERMAL_TYRE_TEMPERATURE_MANAGEMENT_TYTCONFIG_H
#define ECU_THERMAL_TYRE_TEMPERATURE_MANAGEMENT_TYTCONFIG_H

#include "TYT.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const TYT_Config TYT_default_config;
void TYT_config_load_defaults(TYT_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_TYRE_TEMPERATURE_MANAGEMENT_TYTCONFIG_H */
