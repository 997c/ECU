#ifndef ECU_ENGINE_IGNITION_TIMING_CONTROL_ITCCONFIG_H
#define ECU_ENGINE_IGNITION_TIMING_CONTROL_ITCCONFIG_H

#include "ITC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ITC_Config ITC_default_config;
void ITC_config_load_defaults(ITC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_IGNITION_TIMING_CONTROL_ITCCONFIG_H */
