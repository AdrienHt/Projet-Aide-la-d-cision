#ifndef CONTRAINTE_H
#define CONTRAINTE_H
#include <stdlib.h>
#include <iostream>

using namespace std;

class contrainte
{
public:
    contrainte();
    contrainte(const short unsigned int regle,const int nombre_variable);
    virtual ~contrainte();
    unsigned int Getnombre_element()
    {
        return _nombre_element;
    }
    void Setnombre_element( unsigned int val)
    {
        _nombre_element = val;
    }
    short unsigned int Getregle()
    {
        return _regle;
    }
    void Setregle(short unsigned int val)
    {
        _regle = val;
    }
    bool** Getadjacence()
    {
        return _adjacence;
    }
    void Setadjacence(bool** val)
    {
        _adjacence = val;
    }
protected:
private:
    unsigned int _nombre_element;
    short unsigned int _regle;
    bool** _adjacence;
};

#endif // CONTRAINTE_H
