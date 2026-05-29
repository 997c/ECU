#include "PPSconfig.h"

const PPS_Config PPS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void PPS_config_load_defaults(PPS_Config* cfg) {
    if (cfg) *cfg = PPS_default_config;
}
