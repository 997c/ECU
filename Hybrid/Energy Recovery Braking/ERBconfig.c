#include "ERBconfig.h"

const ERB_Config ERB_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ERB_config_load_defaults(ERB_Config* cfg) {
    if (cfg) *cfg = ERB_default_config;
}
