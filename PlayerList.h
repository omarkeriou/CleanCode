#ifndef PLAYERLIST_H_
#define PLAYERLIST_H_
#include <map>
#include <iostream>
#include <memory>

class Playerlist{
    public:
    Playerlist()=default;
    void printOnePlayer(int id);
    void addPlayer(std::unique_ptr<Player>& player);
    private:
        std::string name;
        int id;
        std::map<int,std::string> playerlist;




};
using  PlayerlistPtr = std::unique_ptr<Playerlist>;
void Playerlist::printOnePlayer(int id){ 
        playerlist.find(id)!= playerlist.end() ?  
        std::cout<< playerlist.find(id)->second << " is playing"<<std::endl:  
        std::cout<< "no Player added with this id"<<std::endl;}; 

void Playerlist::addPlayer(std::unique_ptr<Player>& player){
  
    playerlist[player->getId()]=player->getname();
  
    };

 #endif

