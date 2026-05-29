#ifndef ECU_AERODYNAMICS_ACTIVE_AERODYNAMICS_PORSCHE_STYLE_PAACONFIG_H
#define ECU_AERODYNAMICS_ACTIVE_AERODYNAMICS_PORSCHE_STYLE_PAACONFIG_H

#include "PAA.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const PAA_Config PAA_default_config;
void PAA_config_load_defaults(PAA_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_AERODYNAMICS_PORSCHE_STYLE_PAACONFIG_H */
