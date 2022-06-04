#include "Header.cpp";

class Vazio{
    private:
    pair<int,int> pos;
    public:
    Vazio(int x, int y) : pos(make_pair(x,y)){};
    void print(char c = 'E'){
        cout << c;
    } 
};