#ifndef __FORMAT
#define __FORMAT

#include <string>

struct Tag{
  std::string name;
  float value;

  Tag() = default;
  Tag(std::string n, float v){
    name = n;
    value = v;
  }
};

#endif
