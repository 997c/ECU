#ifndef ECU_BRAKING_BRAKE_BY_WIRE_BBWCONFIG_H
#define ECU_BRAKING_BRAKE_BY_WIRE_BBWCONFIG_H

#include "BBW.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const BBW_Config BBW_default_config;
void BBW_config_load_defaults(BBW_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_BY_WIRE_BBWCONFIG_H */
