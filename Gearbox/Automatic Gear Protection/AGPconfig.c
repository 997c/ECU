#include "AGPconfig.h"

const AGP_Config AGP_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AGP_config_load_defaults(AGP_Config* cfg) {
    if (cfg) *cfg = AGP_default_config;
}
