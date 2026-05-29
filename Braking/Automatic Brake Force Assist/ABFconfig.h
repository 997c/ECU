#ifndef ECU_BRAKING_AUTOMATIC_BRAKE_FORCE_ASSIST_ABFCONFIG_H
#define ECU_BRAKING_AUTOMATIC_BRAKE_FORCE_ASSIST_ABFCONFIG_H

#include "ABF.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ABF_Config ABF_default_config;
void ABF_config_load_defaults(ABF_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_AUTOMATIC_BRAKE_FORCE_ASSIST_ABFCONFIG_H */
