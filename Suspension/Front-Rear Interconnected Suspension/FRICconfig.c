#include "FRICconfig.h"

const FRIC_Config FRIC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void FRIC_config_load_defaults(FRIC_Config* cfg) {
    if (cfg) *cfg = FRIC_default_config;
}
