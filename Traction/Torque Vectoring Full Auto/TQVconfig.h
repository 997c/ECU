#ifndef ECU_TRACTION_TORQUE_VECTORING_FULL_AUTO_TQVCONFIG_H
#define ECU_TRACTION_TORQUE_VECTORING_FULL_AUTO_TQVCONFIG_H

#include "TQV.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const TQV_Config TQV_default_config;
void TQV_config_load_defaults(TQV_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_TORQUE_VECTORING_FULL_AUTO_TQVCONFIG_H */
