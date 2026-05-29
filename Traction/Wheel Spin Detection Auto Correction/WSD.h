#ifndef ECU_TRACTION_WHEEL_SPIN_DETECTION_AUTO_CORRECTION_WSD_H
#define ECU_TRACTION_WHEEL_SPIN_DETECTION_AUTO_CORRECTION_WSD_H

#include "ecu_bridge.h"

#ifdef __cplusplus
extern "C" {
#endif

/* WSD - Wheel Spin Detection Auto Correction (Traction) */

typedef struct {
    float param1;
    float param2;
    float param3;
    bool  enabled;
} WSD_Config;

typedef struct {
    float value;
    float target;
    bool  active;
    bool  fault;
} WSD_State;

void WSD_init(const WSD_Config* cfg);
void WSD_update(float dt_ms, const VehicleState* vs, WSD_State* state, ActuatorCommands* out);
void WSD_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_WHEEL_SPIN_DETECTION_AUTO_CORRECTION_WSD_H */
