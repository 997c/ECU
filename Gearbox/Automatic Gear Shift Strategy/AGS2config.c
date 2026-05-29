#include "AGS2config.h"

const AGS2_Config AGS2_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AGS2_config_load_defaults(AGS2_Config* cfg) {
    if (cfg) *cfg = AGS2_default_config;
}
