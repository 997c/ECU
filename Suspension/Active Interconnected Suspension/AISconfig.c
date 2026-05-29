#include "AISconfig.h"

const AIS_Config AIS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AIS_config_load_defaults(AIS_Config* cfg) {
    if (cfg) *cfg = AIS_default_config;
}
