#include "AFS2config.h"

const AFS2_Config AFS2_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AFS2_config_load_defaults(AFS2_Config* cfg) {
    if (cfg) *cfg = AFS2_default_config;
}
