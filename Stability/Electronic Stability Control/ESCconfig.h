#ifndef ECU_STABILITY_ELECTRONIC_STABILITY_CONTROL_ESCCONFIG_H
#define ECU_STABILITY_ELECTRONIC_STABILITY_CONTROL_ESCCONFIG_H

#include "ESC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ESC_Config ESC_default_config;
void ESC_config_load_defaults(ESC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_ELECTRONIC_STABILITY_CONTROL_ESCCONFIG_H */
