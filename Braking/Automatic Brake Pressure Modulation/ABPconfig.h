#ifndef ECU_BRAKING_AUTOMATIC_BRAKE_PRESSURE_MODULATION_ABPCONFIG_H
#define ECU_BRAKING_AUTOMATIC_BRAKE_PRESSURE_MODULATION_ABPCONFIG_H

#include "ABP.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ABP_Config ABP_default_config;
void ABP_config_load_defaults(ABP_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_AUTOMATIC_BRAKE_PRESSURE_MODULATION_ABPCONFIG_H */
