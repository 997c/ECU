#include "ASSconfig.h"

const ASS_Config ASS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ASS_config_load_defaults(ASS_Config* cfg) {
    if (cfg) *cfg = ASS_default_config;
}
