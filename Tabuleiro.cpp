#include "Comum.cpp"

class Jogo{
    private:
    Vazio tabuleiro[9][9];
    public:
    void print(){
        for(int i = 1; i <= 8; i++){
            for(int j = 1; j <= 8; j++){
                tabuleiro[i][j].print();
                cout << " ";
            }
            cout << "\n";
        }
    }
};



