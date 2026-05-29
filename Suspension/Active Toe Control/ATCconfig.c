#include "ATCconfig.h"

const ATC_Config ATC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ATC_config_load_defaults(ATC_Config* cfg) {
    if (cfg) *cfg = ATC_default_config;
}
