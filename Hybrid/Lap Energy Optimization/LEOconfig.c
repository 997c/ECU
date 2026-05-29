#include "LEOconfig.h"

const LEO_Config LEO_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void LEO_config_load_defaults(LEO_Config* cfg) {
    if (cfg) *cfg = LEO_default_config;
}
