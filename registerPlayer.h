#include "Player.h"
#include "identifier.h"
#include "PlayerList.h"
#include <string>
#include <memory>
#include <map>


void AddNewPlayer(std::string name){
     identifierPtr identifier1 = std::make_unique<identifier>();
     int id= identifier1->getId();
     PlayerPtr Player1 = std::make_unique<Player>(id);
     Player1->setname(name);
     Playerlist list;
     list.printOnePlayer(id);

}
void RemovePlayer(std::string name){
     identifierPtr identifier1 = std::make_unique<identifier>();
     PlayerPtr Player1 = std::make_unique<Player>(identifier1->getId());
     Player1->setname(name);
}