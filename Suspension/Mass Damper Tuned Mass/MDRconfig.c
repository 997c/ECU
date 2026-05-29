#include "MDRconfig.h"

const MDR_Config MDR_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void MDR_config_load_defaults(MDR_Config* cfg) {
    if (cfg) *cfg = MDR_default_config;
}
