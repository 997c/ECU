#include "ABS3config.h"

const ABS3_Config ABS3_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ABS3_config_load_defaults(ABS3_Config* cfg) {
    if (cfg) *cfg = ABS3_default_config;
}
