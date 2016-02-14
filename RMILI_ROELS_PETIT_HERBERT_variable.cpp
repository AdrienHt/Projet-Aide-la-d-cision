#include "RMILI_ROELS_PETIT_HERBERT_variable.h"

variable::variable()
{
    //ctor
}
variable::variable(int variable, int taille_emsemble_definition)
{
    Setvariable(variable);
    Settaille_ensemble_definition(taille_emsemble_definition);
    this->_ensemble_definition = new int [taille_emsemble_definition];

}
variable::~variable()
{
    free (this->_ensemble_definition);

}
