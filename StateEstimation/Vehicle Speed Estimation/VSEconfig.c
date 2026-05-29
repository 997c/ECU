#include "VSEconfig.h"

const VSE_Config VSE_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void VSE_config_load_defaults(VSE_Config* cfg) {
    if (cfg) *cfg = VSE_default_config;
}
