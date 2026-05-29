#ifndef ECU_GEARBOX_AUTOMATIC_GEAR_SHIFT_STRATEGY_AGS2CONFIG_H
#define ECU_GEARBOX_AUTOMATIC_GEAR_SHIFT_STRATEGY_AGS2CONFIG_H

#include "AGS2.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AGS2_Config AGS2_default_config;
void AGS2_config_load_defaults(AGS2_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_AUTOMATIC_GEAR_SHIFT_STRATEGY_AGS2CONFIG_H */
