#include "AUSconfig.h"

const AUS_Config AUS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AUS_config_load_defaults(AUS_Config* cfg) {
    if (cfg) *cfg = AUS_default_config;
}
