#include "ARDconfig.h"

const ARD_Config ARD_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ARD_config_load_defaults(ARD_Config* cfg) {
    if (cfg) *cfg = ARD_default_config;
}
