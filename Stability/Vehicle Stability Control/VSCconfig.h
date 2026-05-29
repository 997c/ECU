#ifndef ECU_STABILITY_VEHICLE_STABILITY_CONTROL_VSCCONFIG_H
#define ECU_STABILITY_VEHICLE_STABILITY_CONTROL_VSCCONFIG_H

#include "VSC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const VSC_Config VSC_default_config;
void VSC_config_load_defaults(VSC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_VEHICLE_STABILITY_CONTROL_VSCCONFIG_H */
