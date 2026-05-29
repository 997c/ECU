#include "SSEconfig.h"

const SSE_Config SSE_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void SSE_config_load_defaults(SSE_Config* cfg) {
    if (cfg) *cfg = SSE_default_config;
}
