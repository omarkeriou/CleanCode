#include <map>
#include <iostream>
#include <memory>
class Playerlist{
    public:
    void printOnePlayer(int id);
    private:
        std::string name;
        int id;
        std::map<int,std::string> playerlist;



};

void Playerlist::printOnePlayer(int id){ 
        playerlist.find(id)!= playerlist.end() ?  
        std::cout<< playerlist.find(id)->second << "is playing"<<std::endl:  
        std::cout<< "no Player added with this id"<<std::endl;}; 

