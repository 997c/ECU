#include "TSEconfig.h"

const TSE_Config TSE_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void TSE_config_load_defaults(TSE_Config* cfg) {
    if (cfg) *cfg = TSE_default_config;
}
