#include <iostream>
#include <vector>
#include <string>

using namespace std;

class GameInfo {
public:
    string nome;
    string versao;
    string criador;
    long long visitas;
    int favoritos;

    void mostrarInformacoes() {
        cout << "=== SONIC.EXE: NO MORE CORRUPTION ===\n\n";

        cout << "Nome: " << nome << endl;
        cout << "Versao: " << versao << endl;
        cout << "Criador: " << criador << endl;
        cout << "Visitas: " << visitas << endl;
        cout << "Favoritos: " << favoritos << "K" << endl;

        cout << "\nExecutioner Principal:\n";
        cout << "ArmageddonX\n";

        cout << "\nSobreviventes:\n";

        vector<string> survivors = {
            "Metal Sonic",
            "Pibby",
            "Female BF",
            "GF",
            "Gumball",
            "Finn",
            "Jake",
            "Florzinha"
        };

        for (string personagem : survivors)
        {
            cout << "- " << personagem << endl;
        }
    }
};

int main()
{
    GameInfo jogo;

    jogo.nome = "Sonic.EXE: No More Corruption";
    jogo.versao = "0.1";
    jogo.criador = "Devaster";
    jogo.visitas = 18700000;
    jogo.favoritos = 412;

    jogo.mostrarInformacoes();

    return 0;
}