#include "ABDconfig.h"

const ABD_Config ABD_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ABD_config_load_defaults(ABD_Config* cfg) {
    if (cfg) *cfg = ABD_default_config;
}
