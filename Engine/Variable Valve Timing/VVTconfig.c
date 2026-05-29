#include "VVTconfig.h"

const VVT_Config VVT_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void VVT_config_load_defaults(VVT_Config* cfg) {
    if (cfg) *cfg = VVT_default_config;
}
