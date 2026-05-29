#include "APSconfig.h"

const APS_Config APS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void APS_config_load_defaults(APS_Config* cfg) {
    if (cfg) *cfg = APS_default_config;
}
