#include <iostream>
#include <vector>
#include <string>
#include "ui.h"

using namespace std;

vector<string> reverseString(vector<string> vecString){
  vector<string> revString;
  for(auto r_iter = vecString.rbegin();
           r_iter != vecString.rend(); ++r_iter)
    revString.push_back(*r_iter);
  return revString;
}

vector<string> splitString(string str){
  vector<string> vecString;
  string temp;
  str = str + " ";
  for(auto& c : str){
    if(isspace(c)&&!temp.empty()){
      vecString.push_back(temp);
      temp = "";
    }
    else
      if(!isspace(c))
        temp += c;
  }
  return vecString;
}

int main(){
  State curState;
  string strCommand;
  vector<string> vecCommand;
  
  while (curState.alive()){
    getline(cin, strCommand);
    vecCommand =  splitString(strCommand);
    curState.request(vecCommand);
  }
  return 0;
}
