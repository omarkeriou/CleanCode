#ifndef IDENTIFIER_H_
#define IDENTIFIER_H_
#include<memory>
class identifier {
    public:
    explicit identifier(){id=++NumberOfPlayer;};
    ~identifier(){--id;};
    int getId(){return id;};
    private:
        static int NumberOfPlayer;
        int id;

};
    int identifier::NumberOfPlayer=0;
 
    using identifierPtr =std::unique_ptr<identifier>;    


#endif