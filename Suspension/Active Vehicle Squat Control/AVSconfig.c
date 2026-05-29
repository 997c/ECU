#include "AVSconfig.h"

const AVS_Config AVS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AVS_config_load_defaults(AVS_Config* cfg) {
    if (cfg) *cfg = AVS_default_config;
}
