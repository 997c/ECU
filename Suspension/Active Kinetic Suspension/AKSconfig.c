#include "AKSconfig.h"

const AKS_Config AKS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AKS_config_load_defaults(AKS_Config* cfg) {
    if (cfg) *cfg = AKS_default_config;
}
