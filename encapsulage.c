#include <iostream>

using namespace std;

// Classes
class point {
private :
    int x,y;

public: // Déclaration des méthodes publiques
    friend void modification(point *,int , int );
    friend void affichage (point);
    friend bool compare (point *, point *);
    friend void echange(point *, point *);
};

// Fonctions
void modification(point p,int , int );
void affichage (point);
bool compare (point *, point *);
void echange(point *, point *);


// Main
int main(void) {
    point exemple1 , exemple2;
    modification(&exemple1, 1,2);
    affichage(exemple1);
    modification(&exemple2, 0,2);
    affichage(exemple2);
    cout<<"compare = " <<compare(&exemple1,&exemple2)<<endl;
    echange(&exemple1,&exemple2);
    affichage(exemple1);affichage(exemple2);
    return 0;
}

// Definition
void modification(point * p,int a, int b)
{
    p->x = a ;
    p->y = b;
}

void affichage (point p)
{
    cout<<p.x<<" | "<<p.y<<endl;
}

bool compare (point * a , point * b)
{
    if (a->x != b->x)return false;
    if (a->y != b->y)return false;
    return true;
}

void echange(point * a , point * b)
{
    int transfert = a->x ;
    a->x = b->x;
    b->x = transfert;

    transfert = a->y ;
    a->y = b->y;
    b->y = transfert;

}
