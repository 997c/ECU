#ifndef ECU_GEARBOX_OPTIMAL_GEAR_SELECTION_AUTO_OGSCONFIG_H
#define ECU_GEARBOX_OPTIMAL_GEAR_SELECTION_AUTO_OGSCONFIG_H

#include "OGS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const OGS_Config OGS_default_config;
void OGS_config_load_defaults(OGS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_OPTIMAL_GEAR_SELECTION_AUTO_OGSCONFIG_H */
