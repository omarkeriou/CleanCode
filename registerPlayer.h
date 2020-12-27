#include "Player.h"
#include "identifier.h"
#include "PlayerList.h"
#include <string>
#include <memory>
#include <map>

auto beginGame(){
     PlayerlistPtr list= std::make_unique<Playerlist>();
     return list;
}
void AddNewPlayer(std::string name,PlayerlistPtr& list){
     identifierPtr identifier1 = std::make_unique<identifier>();
     int id= identifier1->getId();
     PlayerPtr Player1 = std::make_unique<Player>(id);
     Player1->setname(name);
     
     list->addPlayer(std::move(Player1));
     list->printOnePlayer(id);

}
void RemovePlayer(int id,PlayerlistPtr& list){
     list->RemovePlayer(id);
}