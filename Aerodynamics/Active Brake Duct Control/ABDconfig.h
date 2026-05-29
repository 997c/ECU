#ifndef ECU_AERODYNAMICS_ACTIVE_BRAKE_DUCT_CONTROL_ABDCONFIG_H
#define ECU_AERODYNAMICS_ACTIVE_BRAKE_DUCT_CONTROL_ABDCONFIG_H

#include "ABD.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ABD_Config ABD_default_config;
void ABD_config_load_defaults(ABD_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_BRAKE_DUCT_CONTROL_ABDCONFIG_H */
