#ifndef ECU_GEARBOX_ANTI_STALL_ASTCONFIG_H
#define ECU_GEARBOX_ANTI_STALL_ASTCONFIG_H

#include "AST.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AST_Config AST_default_config;
void AST_config_load_defaults(AST_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_ANTI_STALL_ASTCONFIG_H */
