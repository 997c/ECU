#ifndef ECU_HYBRID_MGU_H_CONTROL_MGHCONFIG_H
#define ECU_HYBRID_MGU_H_CONTROL_MGHCONFIG_H

#include "MGH.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const MGH_Config MGH_default_config;
void MGH_config_load_defaults(MGH_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_MGU_H_CONTROL_MGHCONFIG_H */
