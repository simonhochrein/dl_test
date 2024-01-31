#include "engine.h"

Engine::Engine(char *version) : version(version) {}

char *Engine::Version() { return version; }
