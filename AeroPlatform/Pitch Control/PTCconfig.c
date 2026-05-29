#include "PTCconfig.h"

const PTC_Config PTC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void PTC_config_load_defaults(PTC_Config* cfg) {
    if (cfg) *cfg = PTC_default_config;
}
