#ifndef ECU_DIAGNOSTICS_ONBOARD_DATA_LOGGING_DLGINTEGRATION_H
#define ECU_DIAGNOSTICS_ONBOARD_DATA_LOGGING_DLGINTEGRATION_H

#include "ecu_bridge.h"
#include "DLG.h"

#ifdef __cplusplus
extern "C" {
#endif

void DLG_integration_init(void);
void DLG_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_ONBOARD_DATA_LOGGING_DLGINTEGRATION_H */
