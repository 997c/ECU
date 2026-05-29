#include "ARCconfig.h"

const ARC_Config ARC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ARC_config_load_defaults(ARC_Config* cfg) {
    if (cfg) *cfg = ARC_default_config;
}
