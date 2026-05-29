#include "ADS4config.h"

const ADS4_Config ADS4_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ADS4_config_load_defaults(ADS4_Config* cfg) {
    if (cfg) *cfg = ADS4_default_config;
}
