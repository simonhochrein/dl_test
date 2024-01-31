#include "engine.h"
#include <iostream>

class MyApplication {
public:
  MyApplication(Engine *engine) { std::cout << engine->Version() << std::endl; }
};

extern "C" void test(Engine *engine) { MyApplication app(engine); }
