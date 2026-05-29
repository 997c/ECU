#include "ARH2config.h"

const ARH2_Config ARH2_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ARH2_config_load_defaults(ARH2_Config* cfg) {
    if (cfg) *cfg = ARH2_default_config;
}
