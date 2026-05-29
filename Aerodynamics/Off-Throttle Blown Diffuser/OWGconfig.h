#ifndef ECU_AERODYNAMICS_OFF_THROTTLE_BLOWN_DIFFUSER_OWGCONFIG_H
#define ECU_AERODYNAMICS_OFF_THROTTLE_BLOWN_DIFFUSER_OWGCONFIG_H

#include "OWG.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const OWG_Config OWG_default_config;
void OWG_config_load_defaults(OWG_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_OFF_THROTTLE_BLOWN_DIFFUSER_OWGCONFIG_H */
