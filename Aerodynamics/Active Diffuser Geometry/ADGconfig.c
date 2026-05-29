#include "ADGconfig.h"

const ADG_Config ADG_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ADG_config_load_defaults(ADG_Config* cfg) {
    if (cfg) *cfg = ADG_default_config;
}
