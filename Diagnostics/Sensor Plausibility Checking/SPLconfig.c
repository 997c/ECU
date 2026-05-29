#include "SPLconfig.h"

const SPL_Config SPL_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void SPL_config_load_defaults(SPL_Config* cfg) {
    if (cfg) *cfg = SPL_default_config;
}
