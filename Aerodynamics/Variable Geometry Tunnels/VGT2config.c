#include "VGT2config.h"

const VGT2_Config VGT2_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void VGT2_config_load_defaults(VGT2_Config* cfg) {
    if (cfg) *cfg = VGT2_default_config;
}
