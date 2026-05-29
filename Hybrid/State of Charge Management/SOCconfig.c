#include "SOCconfig.h"

const SOC_Config SOC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void SOC_config_load_defaults(SOC_Config* cfg) {
    if (cfg) *cfg = SOC_default_config;
}
