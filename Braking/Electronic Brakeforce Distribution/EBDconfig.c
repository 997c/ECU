#include "EBDconfig.h"

const EBD_Config EBD_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void EBD_config_load_defaults(EBD_Config* cfg) {
    if (cfg) *cfg = EBD_default_config;
}
