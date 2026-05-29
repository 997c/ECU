#ifndef ECU_SUSPENSION_ACTIVE_TOE_CONTROL_ATCCONFIG_H
#define ECU_SUSPENSION_ACTIVE_TOE_CONTROL_ATCCONFIG_H

#include "ATC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ATC_Config ATC_default_config;
void ATC_config_load_defaults(ATC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_TOE_CONTROL_ATCCONFIG_H */
