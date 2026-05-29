#include "ABCconfig.h"

const ABC_Config ABC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ABC_config_load_defaults(ABC_Config* cfg) {
    if (cfg) *cfg = ABC_default_config;
}
