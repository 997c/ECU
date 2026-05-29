#include "ARMconfig.h"

const ARM_Config ARM_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ARM_config_load_defaults(ARM_Config* cfg) {
    if (cfg) *cfg = ARM_default_config;
}
