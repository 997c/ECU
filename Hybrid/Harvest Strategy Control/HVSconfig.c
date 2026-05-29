#include "HVSconfig.h"

const HVS_Config HVS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void HVS_config_load_defaults(HVS_Config* cfg) {
    if (cfg) *cfg = HVS_default_config;
}
