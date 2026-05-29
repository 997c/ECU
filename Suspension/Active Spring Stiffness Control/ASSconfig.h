#ifndef ECU_SUSPENSION_ACTIVE_SPRING_STIFFNESS_CONTROL_ASSCONFIG_H
#define ECU_SUSPENSION_ACTIVE_SPRING_STIFFNESS_CONTROL_ASSCONFIG_H

#include "ASS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ASS_Config ASS_default_config;
void ASS_config_load_defaults(ASS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_SPRING_STIFFNESS_CONTROL_ASSCONFIG_H */
