#ifndef ECU_BRAKING_DYNAMIC_BRAKE_CONTROL_DBCCONFIG_H
#define ECU_BRAKING_DYNAMIC_BRAKE_CONTROL_DBCCONFIG_H

#include "DBC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const DBC_Config DBC_default_config;
void DBC_config_load_defaults(DBC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_DYNAMIC_BRAKE_CONTROL_DBCCONFIG_H */
