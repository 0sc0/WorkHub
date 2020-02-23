#include <string>
#include <vector>
#include "ui.h"

#define SAFE_DELETE(p) if(p){delete p; p =NULL;}

State::State(){
  aliveState = true;
  p_Command = new Init(this);
}

State::~State(){
  SAFE_DELETE(p_Command);
}

void State::changeCommand(Command* pCom){
  SAFE_DELETE(p_Command);
  p_Command = pCom;
}

void State::request(vector<string> vCom){
  p_Command -> Handle(vCom);
}

void Init::Handle(vector<string> vecCommand){
  string com = vecCommand.back();
  vecCommand.pop_back();
  if (com == "ls")
    cout << "switch to ls" << endl;
  else if ((com == "quit") || (com == "q"))
    cout << "switch to quit" << endl;
}
