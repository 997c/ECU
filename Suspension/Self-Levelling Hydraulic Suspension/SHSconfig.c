#include "SHSconfig.h"

const SHS_Config SHS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void SHS_config_load_defaults(SHS_Config* cfg) {
    if (cfg) *cfg = SHS_default_config;
}
