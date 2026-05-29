#ifndef ECU_HYBRID_ELECTRIC_TORQUE_FILL_AUTO_ETC2CONFIG_H
#define ECU_HYBRID_ELECTRIC_TORQUE_FILL_AUTO_ETC2CONFIG_H

#include "ETC2.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ETC2_Config ETC2_default_config;
void ETC2_config_load_defaults(ETC2_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_ELECTRIC_TORQUE_FILL_AUTO_ETC2CONFIG_H */
