#include "BBWconfig.h"

const BBW_Config BBW_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void BBW_config_load_defaults(BBW_Config* cfg) {
    if (cfg) *cfg = BBW_default_config;
}
