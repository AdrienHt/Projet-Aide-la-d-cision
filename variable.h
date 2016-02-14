#ifndef VARIABLE_H
#define VARIABLE_H


class variable
{
    public:
        variable();
        virtual ~variable();
        unsigned int Getnumero() { return _numero; }
        void Setnumero(unsigned int val) { _numero = val; }
        int* Getensemble_definition() { return _ensemble_definition; }
        void Setensemble_definition(int* val) { _ensemble_definition = val; }
    protected:
    private:
        unsigned int _numero;
        int* _ensemble_definition;
};

#endif // VARIABLE_H
