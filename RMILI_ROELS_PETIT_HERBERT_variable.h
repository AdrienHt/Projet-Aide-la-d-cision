#ifndef VARIABLE_H
#define VARIABLE_H
#include <stdlib.h>

class variable
{
public:
    variable();
    variable(int variable, int taille_emsemble_definition);
    virtual ~variable();
    unsigned int Getvariable()
    {
        return _variable;
    }
    void Setvariable(unsigned int val)
    {
        _variable = val;
    }
    int* Getensemble_definition()
    {
        return _ensemble_definition;
    }
    void Setensemble_definition( int* val)
    {
        _ensemble_definition = val;
    }
    unsigned int Gettaille_ensemble_definition()
    {
        return _taille_ensemble_definition;
    }
    void Settaille_ensemble_definition(unsigned int val)
    {
        _taille_ensemble_definition = val;
    }
protected:
private:
    unsigned int _variable;
    int* _ensemble_definition;
    unsigned int _taille_ensemble_definition;
};

#endif // VARIABLE_H
