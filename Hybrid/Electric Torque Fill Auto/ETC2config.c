#include "ETC2config.h"

const ETC2_Config ETC2_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ETC2_config_load_defaults(ETC2_Config* cfg) {
    if (cfg) *cfg = ETC2_default_config;
}
