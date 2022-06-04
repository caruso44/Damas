#include "Vazio.cpp"

class Comum : Vazio{
    private:
    bool isPlayer;
    public:
    Comum(int x, int y, bool isPlayer) : Vazio(x,y), isPlayer(isPlayer){}
    void print(){
        if(isPlayer)
            Vazio::print('C');
        else
            Vazio::print('c');
    }
    
};