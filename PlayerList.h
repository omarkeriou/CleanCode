#ifndef PLAYERLIST_H_
#define PLAYERLIST_H_
#include <map>
#include <iostream>
#include <memory>
#include <utility>

class Playerlist{
    public:
    Playerlist()=default;
    ~Playerlist(){std::cout<<"the list has been deleted\n";};
    void printOnePlayer(int id);
    void addPlayer(std::unique_ptr<Player> player);
    void RemovePlayer(int id);
    private:

        int id;
        std::map<int,std::pair<std::string,PlayerPtr>> playerlist;




};
using  PlayerlistPtr = std::unique_ptr<Playerlist>;
void Playerlist::printOnePlayer(int id){ 
        playerlist.find(id)!= playerlist.end() ?  
        std::cout<< playerlist.find(id)->second.first << " is playing"<<std::endl:  
        std::cout<< "no Player added with this id"<<std::endl;}; 

void Playerlist::addPlayer(std::unique_ptr<Player> player){
    id=player->getId();
    playerlist[id]=std::make_pair<std::string,PlayerPtr>(player->getname(),std::move(player));
    };
void Playerlist::RemovePlayer(int id){
    if(playerlist.find(id)!= playerlist.end()){ 
            std::string name= playerlist.find(id)->second.first;
            playerlist.erase(id);
            std::cout<< name<< " has been deleted from list"<<std::endl;}
    else
        {std::cout<< "there is no player with this id"<<std::endl;};

}
 #endif

