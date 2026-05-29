#ifndef ECU_HYBRID_REGENERATIVE_BRAKE_ASSIST_AUTO_RBACONFIG_H
#define ECU_HYBRID_REGENERATIVE_BRAKE_ASSIST_AUTO_RBACONFIG_H

#include "RBA.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const RBA_Config RBA_default_config;
void RBA_config_load_defaults(RBA_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_REGENERATIVE_BRAKE_ASSIST_AUTO_RBACONFIG_H */
