#ifndef ECU_STABILITY_OVERSTEER_CONTROL_AUTO_OVCCONFIG_H
#define ECU_STABILITY_OVERSTEER_CONTROL_AUTO_OVCCONFIG_H

#include "OVC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const OVC_Config OVC_default_config;
void OVC_config_load_defaults(OVC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_OVERSTEER_CONTROL_AUTO_OVCCONFIG_H */
