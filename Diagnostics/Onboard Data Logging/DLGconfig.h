#ifndef ECU_DIAGNOSTICS_ONBOARD_DATA_LOGGING_DLGCONFIG_H
#define ECU_DIAGNOSTICS_ONBOARD_DATA_LOGGING_DLGCONFIG_H

#include "DLG.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const DLG_Config DLG_default_config;
void DLG_config_load_defaults(DLG_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_ONBOARD_DATA_LOGGING_DLGCONFIG_H */
