#ifndef ECU_GEARBOX_DOWNSHIFT_PROTECTION_DSPCONFIG_H
#define ECU_GEARBOX_DOWNSHIFT_PROTECTION_DSPCONFIG_H

#include "DSP.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const DSP_Config DSP_default_config;
void DSP_config_load_defaults(DSP_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_DOWNSHIFT_PROTECTION_DSPCONFIG_H */
