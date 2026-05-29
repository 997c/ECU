#include "AWFconfig.h"

const AWF_Config AWF_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AWF_config_load_defaults(AWF_Config* cfg) {
    if (cfg) *cfg = AWF_default_config;
}
