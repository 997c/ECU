#include "ESCconfig.h"

const ESC_Config ESC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ESC_config_load_defaults(ESC_Config* cfg) {
    if (cfg) *cfg = ESC_default_config;
}
