#ifndef ECU_STABILITY_YAW_RATE_CONTROL_YRCCONFIG_H
#define ECU_STABILITY_YAW_RATE_CONTROL_YRCCONFIG_H

#include "YRC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const YRC_Config YRC_default_config;
void YRC_config_load_defaults(YRC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_YAW_RATE_CONTROL_YRCCONFIG_H */
