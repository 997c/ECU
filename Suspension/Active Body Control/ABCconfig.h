#ifndef ECU_SUSPENSION_ACTIVE_BODY_CONTROL_ABCCONFIG_H
#define ECU_SUSPENSION_ACTIVE_BODY_CONTROL_ABCCONFIG_H

#include "ABC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ABC_Config ABC_default_config;
void ABC_config_load_defaults(ABC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_BODY_CONTROL_ABCCONFIG_H */
