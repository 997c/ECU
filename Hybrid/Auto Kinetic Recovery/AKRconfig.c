#include "AKRconfig.h"

const AKR_Config AKR_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AKR_config_load_defaults(AKR_Config* cfg) {
    if (cfg) *cfg = AKR_default_config;
}
