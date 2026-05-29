#ifndef ECU_BRAKING_CORNERING_BRAKE_CONTROL_CBCCONFIG_H
#define ECU_BRAKING_CORNERING_BRAKE_CONTROL_CBCCONFIG_H

#include "CBC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const CBC_Config CBC_default_config;
void CBC_config_load_defaults(CBC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_CORNERING_BRAKE_CONTROL_CBCCONFIG_H */
