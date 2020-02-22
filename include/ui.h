#ifndef UI
#define UI

#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum FirstCommand{
  UNKNOWN = 0,
  EXIT = 1,
  STATUS = 2,
  LS = 3,
};

enum LsCommand{
  TASK = 0,
  CWORK = 1,
};

class Command;

class State{
public:
  State();
  ~State();
  void changeCommand(Command* pCom);
  void request(vector<string> vCommands);
  void exitState(){aliveState = false;}
  bool alive(){return aliveState;}
private:
  Command* p_Command;
  bool aliveState;
};

class Command{
public:
  Command(State* pState) : p_State(pState){}
  virtual ~Command(){}
  virtual void Handle(State* pState, vector<string> vecCommand);
protected:
  State* p_State;
};

class Init : public Command{
  void Handle(State* pState, vector<string> vecCommand);
};

class Exit : public Command{
  void exec();
};

class Status : public Command{
  void exec();
};

class Ls : public Command{
  
};
 

#endif
