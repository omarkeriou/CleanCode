#ifndef PLAYER_H_
#define PLAYER_H_
#include <string>
#include <memory>
#include <iostream>
class Player {
    public:
    explicit Player(int id):id{id} {};
    ~Player(){std::cout << "the destructor of the player "<< Player::name<<" has been deleted"<<std::endl;}
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

int Player::getId(){return Player::id;};
using PlayerPtr =std::unique_ptr<Player>;    

#endif