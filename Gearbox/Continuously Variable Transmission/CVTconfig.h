#ifndef ECU_GEARBOX_CONTINUOUSLY_VARIABLE_TRANSMISSION_CVTCONFIG_H
#define ECU_GEARBOX_CONTINUOUSLY_VARIABLE_TRANSMISSION_CVTCONFIG_H

#include "CVT.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const CVT_Config CVT_default_config;
void CVT_config_load_defaults(CVT_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_CONTINUOUSLY_VARIABLE_TRANSMISSION_CVTCONFIG_H */
