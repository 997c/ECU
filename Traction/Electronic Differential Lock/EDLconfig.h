#ifndef ECU_TRACTION_ELECTRONIC_DIFFERENTIAL_LOCK_EDLCONFIG_H
#define ECU_TRACTION_ELECTRONIC_DIFFERENTIAL_LOCK_EDLCONFIG_H

#include "EDL.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const EDL_Config EDL_default_config;
void EDL_config_load_defaults(EDL_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_ELECTRONIC_DIFFERENTIAL_LOCK_EDLCONFIG_H */
