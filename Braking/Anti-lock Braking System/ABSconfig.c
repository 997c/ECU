#include "ABSconfig.h"

const ABS_Config ABS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ABS_config_load_defaults(ABS_Config* cfg) {
    if (cfg) *cfg = ABS_default_config;
}
