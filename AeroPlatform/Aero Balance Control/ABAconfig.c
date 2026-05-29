#include "ABAconfig.h"

const ABA_Config ABA_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ABA_config_load_defaults(ABA_Config* cfg) {
    if (cfg) *cfg = ABA_default_config;
}
