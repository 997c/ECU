#ifndef ECU_GEARBOX_AUTOMATIC_GEAR_PROTECTION_AGPCONFIG_H
#define ECU_GEARBOX_AUTOMATIC_GEAR_PROTECTION_AGPCONFIG_H

#include "AGP.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AGP_Config AGP_default_config;
void AGP_config_load_defaults(AGP_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_AUTOMATIC_GEAR_PROTECTION_AGPCONFIG_H */
