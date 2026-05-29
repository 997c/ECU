#ifndef ECU_HYBRID_MGU_K_TORQUE_BLEND_CONTROL_MGKCONFIG_H
#define ECU_HYBRID_MGU_K_TORQUE_BLEND_CONTROL_MGKCONFIG_H

#include "MGK.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const MGK_Config MGK_default_config;
void MGK_config_load_defaults(MGK_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_MGU_K_TORQUE_BLEND_CONTROL_MGKCONFIG_H */
