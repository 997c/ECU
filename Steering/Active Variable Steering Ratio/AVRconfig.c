#include "AVRconfig.h"

const AVR_Config AVR_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AVR_config_load_defaults(AVR_Config* cfg) {
    if (cfg) *cfg = AVR_default_config;
}
