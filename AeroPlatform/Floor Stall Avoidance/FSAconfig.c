#include "FSAconfig.h"

const FSA_Config FSA_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void FSA_config_load_defaults(FSA_Config* cfg) {
    if (cfg) *cfg = FSA_default_config;
}
