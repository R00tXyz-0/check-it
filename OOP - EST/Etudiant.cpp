#include <iostream>
using namespace std;

class Etudiante
{
    private:
    string nom;
    int age;
    float moyenne;

    public:
    void Saisir(){
        cout << "Entrer Votre Nom : ";
        cin >> nom;
        cout << "Entrer Votre Age : ";
        cin >> age;
        cout << "Entrer Votre Moyenne : ";
        cin >> nom;
    }

    void Afficher(){
        cout << "Nom : "<< nom << endl;
        cout << "Age : "<< age << endl;
        cout << "Moyenne : "<< moyenne << endl;
    }
    
};


int main(){

    Etudiante Othmane;

    Othmane.Saisir();
    Othmane.Afficher();
}

