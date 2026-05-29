#ifndef ECU_GEARBOX_AUTOMATIC_GEAR_SELECTION_AGSCONFIG_H
#define ECU_GEARBOX_AUTOMATIC_GEAR_SELECTION_AGSCONFIG_H

#include "AGS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AGS_Config AGS_default_config;
void AGS_config_load_defaults(AGS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_AUTOMATIC_GEAR_SELECTION_AGSCONFIG_H */
