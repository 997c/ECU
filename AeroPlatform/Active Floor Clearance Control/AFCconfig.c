#include "AFCconfig.h"

const AFC_Config AFC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AFC_config_load_defaults(AFC_Config* cfg) {
    if (cfg) *cfg = AFC_default_config;
}
