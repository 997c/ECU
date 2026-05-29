#include "SLAconfig.h"

const SLA_Config SLA_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void SLA_config_load_defaults(SLA_Config* cfg) {
    if (cfg) *cfg = SLA_default_config;
}
