#ifndef ECU_THERMAL_OIL_THERMAL_MANAGEMENT_OTMCONFIG_H
#define ECU_THERMAL_OIL_THERMAL_MANAGEMENT_OTMCONFIG_H

#include "OTM.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const OTM_Config OTM_default_config;
void OTM_config_load_defaults(OTM_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_OIL_THERMAL_MANAGEMENT_OTMCONFIG_H */
