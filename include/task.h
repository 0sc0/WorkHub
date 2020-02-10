#ifndef __TASK
#define __TASK

#include <ctime>
#include <vector>
#include "format.h"

class Task {
private:
  tm* uploadTime;
  vector<Tag> tarPoints;
public:
    Task();
};

#endif
