#ifndef ECU_THERMAL_INTERCOOLER_CHARGE_AIR_THERMAL_ICTCONFIG_H
#define ECU_THERMAL_INTERCOOLER_CHARGE_AIR_THERMAL_ICTCONFIG_H

#include "ICT.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ICT_Config ICT_default_config;
void ICT_config_load_defaults(ICT_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_INTERCOOLER_CHARGE_AIR_THERMAL_ICTCONFIG_H */
