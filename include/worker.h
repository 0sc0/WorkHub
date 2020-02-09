#ifndef WORKER
#define WORKER

#include <string>

class Worker {
    /* 这个类表示最普通的一类员工，他们可以进行接收工作任务，
     */
private:
    // 员工的姓名
    std::string username;
public:
    // 构造函数
    Worker();
};

#endif