#include "SBWconfig.h"

const SBW_Config SBW_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void SBW_config_load_defaults(SBW_Config* cfg) {
    if (cfg) *cfg = SBW_default_config;
}
