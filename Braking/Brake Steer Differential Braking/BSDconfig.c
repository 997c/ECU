#include "BSDconfig.h"

const BSD_Config BSD_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void BSD_config_load_defaults(BSD_Config* cfg) {
    if (cfg) *cfg = BSD_default_config;
}
