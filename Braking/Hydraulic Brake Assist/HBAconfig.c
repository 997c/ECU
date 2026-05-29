#include "HBAconfig.h"

const HBA_Config HBA_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void HBA_config_load_defaults(HBA_Config* cfg) {
    if (cfg) *cfg = HBA_default_config;
}
