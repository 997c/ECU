#ifndef ECU_TYRES_TYRE_PRESSURE_MONITORING_TPMCONFIG_H
#define ECU_TYRES_TYRE_PRESSURE_MONITORING_TPMCONFIG_H

#include "TPM.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const TPM_Config TPM_default_config;
void TPM_config_load_defaults(TPM_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TYRE_PRESSURE_MONITORING_TPMCONFIG_H */
