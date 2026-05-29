#include "ABRconfig.h"

const ABR_Config ABR_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ABR_config_load_defaults(ABR_Config* cfg) {
    if (cfg) *cfg = ABR_default_config;
}
