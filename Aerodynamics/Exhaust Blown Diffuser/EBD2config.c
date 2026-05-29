#include "EBD2config.h"

const EBD2_Config EBD2_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void EBD2_config_load_defaults(EBD2_Config* cfg) {
    if (cfg) *cfg = EBD2_default_config;
}
