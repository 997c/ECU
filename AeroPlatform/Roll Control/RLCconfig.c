#include "RLCconfig.h"

const RLC_Config RLC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void RLC_config_load_defaults(RLC_Config* cfg) {
    if (cfg) *cfg = RLC_default_config;
}
