
#include <iostream>
#include <memory>
#include <string>
#include  "registerPlayer.h"
#include "PlayerList.h"
int main(void){
     

auto list =beginGame();
AddNewPlayer(std::string("Omar"),list);
AddNewPlayer(std::string("Cyrine"),list);

}