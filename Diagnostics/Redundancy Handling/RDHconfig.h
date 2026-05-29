#ifndef ECU_DIAGNOSTICS_REDUNDANCY_HANDLING_RDHCONFIG_H
#define ECU_DIAGNOSTICS_REDUNDANCY_HANDLING_RDHCONFIG_H

#include "RDH.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const RDH_Config RDH_default_config;
void RDH_config_load_defaults(RDH_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_REDUNDANCY_HANDLING_RDHCONFIG_H */
