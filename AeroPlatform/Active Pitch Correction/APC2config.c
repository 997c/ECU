#include "APC2config.h"

const APC2_Config APC2_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void APC2_config_load_defaults(APC2_Config* cfg) {
    if (cfg) *cfg = APC2_default_config;
}
