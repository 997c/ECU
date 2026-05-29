#ifndef ECU_THERMAL_GEARBOX_HYDRAULIC_THERMAL_GBTCONFIG_H
#define ECU_THERMAL_GEARBOX_HYDRAULIC_THERMAL_GBTCONFIG_H

#include "GBT.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const GBT_Config GBT_default_config;
void GBT_config_load_defaults(GBT_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_GEARBOX_HYDRAULIC_THERMAL_GBTCONFIG_H */
