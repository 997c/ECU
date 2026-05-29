#include "AVTconfig.h"

const AVT_Config AVT_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AVT_config_load_defaults(AVT_Config* cfg) {
    if (cfg) *cfg = AVT_default_config;
}
