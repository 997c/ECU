#include "AIMconfig.h"

const AIM_Config AIM_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AIM_config_load_defaults(AIM_Config* cfg) {
    if (cfg) *cfg = AIM_default_config;
}
