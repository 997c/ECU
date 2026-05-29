#include "AHBconfig.h"

const AHB_Config AHB_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AHB_config_load_defaults(AHB_Config* cfg) {
    if (cfg) *cfg = AHB_default_config;
}
