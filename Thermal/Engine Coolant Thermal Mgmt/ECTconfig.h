#ifndef ECU_THERMAL_ENGINE_COOLANT_THERMAL_MGMT_ECTCONFIG_H
#define ECU_THERMAL_ENGINE_COOLANT_THERMAL_MGMT_ECTCONFIG_H

#include "ECT.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ECT_Config ECT_default_config;
void ECT_config_load_defaults(ECT_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_ENGINE_COOLANT_THERMAL_MGMT_ECTCONFIG_H */
