#include "VIGconfig.h"

const VIG_Config VIG_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void VIG_config_load_defaults(VIG_Config* cfg) {
    if (cfg) *cfg = VIG_default_config;
}
