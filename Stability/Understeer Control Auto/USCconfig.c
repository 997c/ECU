#include "USCconfig.h"

const USC_Config USC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void USC_config_load_defaults(USC_Config* cfg) {
    if (cfg) *cfg = USC_default_config;
}
