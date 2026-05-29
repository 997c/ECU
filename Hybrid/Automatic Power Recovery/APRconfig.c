#include "APRconfig.h"

const APR_Config APR_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void APR_config_load_defaults(APR_Config* cfg) {
    if (cfg) *cfg = APR_default_config;
}
