#include "ABFconfig.h"

const ABF_Config ABF_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ABF_config_load_defaults(ABF_Config* cfg) {
    if (cfg) *cfg = ABF_default_config;
}
