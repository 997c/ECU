#include "AFLconfig.h"

const AFL_Config AFL_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AFL_config_load_defaults(AFL_Config* cfg) {
    if (cfg) *cfg = AFL_default_config;
}
