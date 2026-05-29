#include "MDMconfig.h"

const MDM_Config MDM_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void MDM_config_load_defaults(MDM_Config* cfg) {
    if (cfg) *cfg = MDM_default_config;
}
