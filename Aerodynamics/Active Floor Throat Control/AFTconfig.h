#ifndef ECU_AERODYNAMICS_ACTIVE_FLOOR_THROAT_CONTROL_AFTCONFIG_H
#define ECU_AERODYNAMICS_ACTIVE_FLOOR_THROAT_CONTROL_AFTCONFIG_H

#include "AFT.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AFT_Config AFT_default_config;
void AFT_config_load_defaults(AFT_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_FLOOR_THROAT_CONTROL_AFTCONFIG_H */
