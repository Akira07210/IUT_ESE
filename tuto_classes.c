#include <iostream>

using namespace std;

class point {
private: // Déclaration des données privées
    string n;
    double x, y;
public: // Déclaration des méthodes publiques
    void initialise(string, double, double);
    void affiche();
};

int main(void) {
point a;
a.initialise("a", 5, 8);
a.affiche();
return 0;
}

void point::initialise (string nom, double abs, double ord) {
n = nom;
x = abs;
y = ord;
}

void point::affiche()
{
    cout<<n<<"("<<x<<","<<y<<")"<<endl;
}
