#ifndef ECU_STABILITY_DYNAMIC_STABILITY_CONTROL_DSCCONFIG_H
#define ECU_STABILITY_DYNAMIC_STABILITY_CONTROL_DSCCONFIG_H

#include "DSC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const DSC_Config DSC_default_config;
void DSC_config_load_defaults(DSC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_DYNAMIC_STABILITY_CONTROL_DSCCONFIG_H */
