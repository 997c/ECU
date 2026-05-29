#ifndef ECU_TYRES_SLIP_ANGLE_TARGET_CONTROL_SLACONFIG_H
#define ECU_TYRES_SLIP_ANGLE_TARGET_CONTROL_SLACONFIG_H

#include "SLA.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const SLA_Config SLA_default_config;
void SLA_config_load_defaults(SLA_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_SLIP_ANGLE_TARGET_CONTROL_SLACONFIG_H */
