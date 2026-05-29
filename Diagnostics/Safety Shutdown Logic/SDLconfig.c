#include "SDLconfig.h"

const SDL_Config SDL_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void SDL_config_load_defaults(SDL_Config* cfg) {
    if (cfg) *cfg = SDL_default_config;
}
