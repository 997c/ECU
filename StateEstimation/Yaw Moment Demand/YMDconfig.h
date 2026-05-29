#ifndef ECU_STATE_ESTIMATION_YAW_MOMENT_DEMAND_YMDCONFIG_H
#define ECU_STATE_ESTIMATION_YAW_MOMENT_DEMAND_YMDCONFIG_H

#include "YMD.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const YMD_Config YMD_default_config;
void YMD_config_load_defaults(YMD_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_YAW_MOMENT_DEMAND_YMDCONFIG_H */
