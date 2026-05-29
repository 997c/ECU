#include "APCconfig.h"

const APC_Config APC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void APC_config_load_defaults(APC_Config* cfg) {
    if (cfg) *cfg = APC_default_config;
}
