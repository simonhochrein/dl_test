#include "engine.h"
#include <dlfcn.h>
#include <stdio.h>

int main() {
  void *dll = dlopen("test.dylib", RTLD_LAZY);

  if (!dll) {
    printf("Error: %s\n", dlerror());
    return 1;
  }

  Engine engine("2.0");

  auto test = (void (*)(Engine *))(dlsym(dll, "test"));

  if (!test) {
    printf("Error: %s\n", dlerror());
    return 1;
  }

  test(&engine);

  dlclose(dll);
}
