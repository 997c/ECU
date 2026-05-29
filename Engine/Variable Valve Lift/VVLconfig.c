#include "VVLconfig.h"

const VVL_Config VVL_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void VVL_config_load_defaults(VVL_Config* cfg) {
    if (cfg) *cfg = VVL_default_config;
}
