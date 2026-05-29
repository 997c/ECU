#ifndef ECU_AERODYNAMICS_EXHAUST_BLOWN_DIFFUSER_EBD2CONFIG_H
#define ECU_AERODYNAMICS_EXHAUST_BLOWN_DIFFUSER_EBD2CONFIG_H

#include "EBD2.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const EBD2_Config EBD2_default_config;
void EBD2_config_load_defaults(EBD2_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_EXHAUST_BLOWN_DIFFUSER_EBD2CONFIG_H */
