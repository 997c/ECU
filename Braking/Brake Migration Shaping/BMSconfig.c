#include "BMSconfig.h"

const BMS_Config BMS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void BMS_config_load_defaults(BMS_Config* cfg) {
    if (cfg) *cfg = BMS_default_config;
}
