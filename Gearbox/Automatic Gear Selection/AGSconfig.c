#include "AGSconfig.h"

const AGS_Config AGS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AGS_config_load_defaults(AGS_Config* cfg) {
    if (cfg) *cfg = AGS_default_config;
}
