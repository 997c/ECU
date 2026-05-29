#ifndef ECU_SUSPENSION_MASS_DAMPER_TUNED_MASS_MDRCONFIG_H
#define ECU_SUSPENSION_MASS_DAMPER_TUNED_MASS_MDRCONFIG_H

#include "MDR.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const MDR_Config MDR_default_config;
void MDR_config_load_defaults(MDR_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_MASS_DAMPER_TUNED_MASS_MDRCONFIG_H */
