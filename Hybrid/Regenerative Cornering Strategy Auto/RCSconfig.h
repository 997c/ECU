#ifndef ECU_HYBRID_REGENERATIVE_CORNERING_STRATEGY_AUTO_RCSCONFIG_H
#define ECU_HYBRID_REGENERATIVE_CORNERING_STRATEGY_AUTO_RCSCONFIG_H

#include "RCS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const RCS_Config RCS_default_config;
void RCS_config_load_defaults(RCS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_REGENERATIVE_CORNERING_STRATEGY_AUTO_RCSCONFIG_H */
