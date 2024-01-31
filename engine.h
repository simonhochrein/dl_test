#pragma once

class Engine {
public:
  Engine(char *version);
  char *Version();

private:
  char *version;
};
