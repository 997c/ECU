#include "ALAconfig.h"

const ALA_Config ALA_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ALA_config_load_defaults(ALA_Config* cfg) {
    if (cfg) *cfg = ALA_default_config;
}
