#include "ECTconfig.h"

const ECT_Config ECT_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ECT_config_load_defaults(ECT_Config* cfg) {
    if (cfg) *cfg = ECT_default_config;
}
