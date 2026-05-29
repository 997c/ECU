#include "HVCconfig.h"

const HVC_Config HVC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void HVC_config_load_defaults(HVC_Config* cfg) {
    if (cfg) *cfg = HVC_default_config;
}
