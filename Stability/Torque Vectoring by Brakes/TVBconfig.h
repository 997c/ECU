#ifndef ECU_STABILITY_TORQUE_VECTORING_BY_BRAKES_TVBCONFIG_H
#define ECU_STABILITY_TORQUE_VECTORING_BY_BRAKES_TVBCONFIG_H

#include "TVB.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const TVB_Config TVB_default_config;
void TVB_config_load_defaults(TVB_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_TORQUE_VECTORING_BY_BRAKES_TVBCONFIG_H */
