#ifndef ECU_BRAKING_AUTOMATIC_BRAKE_REGEN_BLEND_ABRCONFIG_H
#define ECU_BRAKING_AUTOMATIC_BRAKE_REGEN_BLEND_ABRCONFIG_H

#include "ABR.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ABR_Config ABR_default_config;
void ABR_config_load_defaults(ABR_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_AUTOMATIC_BRAKE_REGEN_BLEND_ABRCONFIG_H */
