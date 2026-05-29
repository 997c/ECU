#include "AFSconfig.h"

const AFS_Config AFS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AFS_config_load_defaults(AFS_Config* cfg) {
    if (cfg) *cfg = AFS_default_config;
}
