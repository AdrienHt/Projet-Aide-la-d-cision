#include "RMILI_ROELS_PETIT_HERBERT_contrainte.h"

contrainte::contrainte()
{
    //ctor
}

contrainte::contrainte(const short unsigned int regle,const int nombre_variable)
{
    Setnombre_element(nombre_variable);
    Setregle(regle);
    this->_adjacence = new bool* [nombre_variable];

    for(int cpt = 0; cpt < nombre_variable; cpt++)
    {
        this->_adjacence[cpt] =  new bool [nombre_variable];
    }
}



contrainte::~contrainte()
{
    cout << Getnombre_element();
    for(int cpt = 0; cpt < Getnombre_element(); cpt++)
    {
      free(this->_adjacence[cpt]);
    }

    free(this->_adjacence);

}
