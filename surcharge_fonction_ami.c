#include <iostream>

using namespace std;

// Classes
class point {
private :
    int x,y;

public: // Déclaration des méthodes publiques
    friend void init (point * , int , int);
    friend void affichage (point);
    friend point operator + (point, point);
};

// Fonctions
void init (point *, int , int );
void affichage (point);

// Main
int main(void) {
    point a , b, c;
    init(&a ,45 , 9);
    init(&b, 63 , 5);
    c = a + b;
    affichage(c);



}

// Definition
point operator + (point a, point b)
{
    point new_point;
    new_point.x = a.x + b.x;
    new_point.y = a.y + b.y;
    return new_point ;
}


void init (point * p , int a , int b)
{
    p->x = a;
    p->y = b;
}

void affichage (point p)
{
    cout<<p.x<<" | "<<p.y<<endl;
}
