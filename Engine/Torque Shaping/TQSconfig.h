#ifndef ECU_ENGINE_TORQUE_SHAPING_TQSCONFIG_H
#define ECU_ENGINE_TORQUE_SHAPING_TQSCONFIG_H

#include "TQS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const TQS_Config TQS_default_config;
void TQS_config_load_defaults(TQS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_TORQUE_SHAPING_TQSCONFIG_H */
