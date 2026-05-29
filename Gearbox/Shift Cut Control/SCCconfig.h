#ifndef ECU_GEARBOX_SHIFT_CUT_CONTROL_SCCCONFIG_H
#define ECU_GEARBOX_SHIFT_CUT_CONTROL_SCCCONFIG_H

#include "SCC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const SCC_Config SCC_default_config;
void SCC_config_load_defaults(SCC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_SHIFT_CUT_CONTROL_SCCCONFIG_H */
