#include "ADSconfig.h"

const ADS_Config ADS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ADS_config_load_defaults(ADS_Config* cfg) {
    if (cfg) *cfg = ADS_default_config;
}
