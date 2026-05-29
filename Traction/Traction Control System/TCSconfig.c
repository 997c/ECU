#include "TCSconfig.h"

const TCS_Config TCS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void TCS_config_load_defaults(TCS_Config* cfg) {
    if (cfg) *cfg = TCS_default_config;
}
