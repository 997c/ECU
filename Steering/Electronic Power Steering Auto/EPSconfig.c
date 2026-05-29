#include "EPSconfig.h"

const EPS_Config EPS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void EPS_config_load_defaults(EPS_Config* cfg) {
    if (cfg) *cfg = EPS_default_config;
}
