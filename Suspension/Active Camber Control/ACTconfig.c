#include "ACTconfig.h"

const ACT_Config ACT_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ACT_config_load_defaults(ACT_Config* cfg) {
    if (cfg) *cfg = ACT_default_config;
}
