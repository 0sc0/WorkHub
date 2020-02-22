#include <string>
#include <vector>
#include "ui.h"

#define SAFE_DELETE(p) if(p){delete p; p =NULL;}

State::State(){
  aliveState = true;
  p_Command = new Init;
}

State::~State(){
  SAFE_DELETE(p_Command);
}

void State::changeCommand(vector<string> vCom){

}


void Init::Handle(State* pState, vector<string> vecCommand){

}




State::State(){
  p_Command = new Init;
}
