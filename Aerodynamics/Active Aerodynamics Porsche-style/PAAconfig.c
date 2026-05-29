#include "PAAconfig.h"

const PAA_Config PAA_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void PAA_config_load_defaults(PAA_Config* cfg) {
    if (cfg) *cfg = PAA_default_config;
}
