#include "ADS3config.h"

const ADS3_Config ADS3_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ADS3_config_load_defaults(ADS3_Config* cfg) {
    if (cfg) *cfg = ADS3_default_config;
}
