#include "ARHconfig.h"

const ARH_Config ARH_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ARH_config_load_defaults(ARH_Config* cfg) {
    if (cfg) *cfg = ARH_default_config;
}
