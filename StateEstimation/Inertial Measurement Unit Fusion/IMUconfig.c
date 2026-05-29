#include "IMUconfig.h"

const IMU_Config IMU_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void IMU_config_load_defaults(IMU_Config* cfg) {
    if (cfg) *cfg = IMU_default_config;
}
