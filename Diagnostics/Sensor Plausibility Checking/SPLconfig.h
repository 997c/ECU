#ifndef ECU_DIAGNOSTICS_SENSOR_PLAUSIBILITY_CHECKING_SPLCONFIG_H
#define ECU_DIAGNOSTICS_SENSOR_PLAUSIBILITY_CHECKING_SPLCONFIG_H

#include "SPL.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const SPL_Config SPL_default_config;
void SPL_config_load_defaults(SPL_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_SENSOR_PLAUSIBILITY_CHECKING_SPLCONFIG_H */
