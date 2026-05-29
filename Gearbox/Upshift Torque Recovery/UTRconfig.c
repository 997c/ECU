#include "UTRconfig.h"

const UTR_Config UTR_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void UTR_config_load_defaults(UTR_Config* cfg) {
    if (cfg) *cfg = UTR_default_config;
}
