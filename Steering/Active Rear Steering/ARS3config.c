#include "ARS3config.h"

const ARS3_Config ARS3_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ARS3_config_load_defaults(ARS3_Config* cfg) {
    if (cfg) *cfg = ARS3_default_config;
}
