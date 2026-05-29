#include "VSCconfig.h"

const VSC_Config VSC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void VSC_config_load_defaults(VSC_Config* cfg) {
    if (cfg) *cfg = VSC_default_config;
}
