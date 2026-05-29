#ifndef ECU_HYBRID_STATE_OF_CHARGE_MANAGEMENT_SOCCONFIG_H
#define ECU_HYBRID_STATE_OF_CHARGE_MANAGEMENT_SOCCONFIG_H

#include "SOC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const SOC_Config SOC_default_config;
void SOC_config_load_defaults(SOC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_STATE_OF_CHARGE_MANAGEMENT_SOCCONFIG_H */
