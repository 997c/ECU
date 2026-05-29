#include "LCconfig.h"

const LC_Config LC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void LC_config_load_defaults(LC_Config* cfg) {
    if (cfg) *cfg = LC_default_config;
}
