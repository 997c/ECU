#include "SLRconfig.h"

const SLR_Config SLR_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void SLR_config_load_defaults(SLR_Config* cfg) {
    if (cfg) *cfg = SLR_default_config;
}
