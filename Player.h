#ifndef PLAYER_H_
#define PLAYER_H_
#include <string>
#include <memory>
#include <iostream>
class Player {
    public:
    explicit Player(int id):id{id} {};
    void setname(std::string name);
    std::string getname();
    int getId();
    void play();
    private: 
    std::string name;
    int id;
    
};

std::string Player::getname(){return Player::name;};
void Player::setname(std::string name){
    Player::name=name;
    std::cout<<"Welcome "<< "Player "<<Player::id<<": "<<Player::name<<" to the Game!"<<std::endl;};
using PlayerPtr =std::unique_ptr<Player>;    

#endif