#include "EGRconfig.h"

const EGR_Config EGR_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void EGR_config_load_defaults(EGR_Config* cfg) {
    if (cfg) *cfg = EGR_default_config;
}
