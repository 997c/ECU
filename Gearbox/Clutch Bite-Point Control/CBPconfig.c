#include "CBPconfig.h"

const CBP_Config CBP_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void CBP_config_load_defaults(CBP_Config* cfg) {
    if (cfg) *cfg = CBP_default_config;
}
