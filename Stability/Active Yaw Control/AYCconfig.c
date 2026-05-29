#include "AYCconfig.h"

const AYC_Config AYC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AYC_config_load_defaults(AYC_Config* cfg) {
    if (cfg) *cfg = AYC_default_config;
}
