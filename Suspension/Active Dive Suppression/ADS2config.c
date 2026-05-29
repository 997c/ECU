#include "ADS2config.h"

const ADS2_Config ADS2_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ADS2_config_load_defaults(ADS2_Config* cfg) {
    if (cfg) *cfg = ADS2_default_config;
}
