#include "LMPconfig.h"

const LMP_Config LMP_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void LMP_config_load_defaults(LMP_Config* cfg) {
    if (cfg) *cfg = LMP_default_config;
}
