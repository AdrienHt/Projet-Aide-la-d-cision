#ifndef CONTRAINTE_H
#define CONTRAINTE_H


class Contrainte
{
    public:
        Contrainte();
        virtual ~Contrainte();
        unsigned int Get() { return m_regle; }
        void Set(unsigned int val) { m_regle = val; }
    protected:
    private:
        unsigned int m_regle;
};

#endif // CONTRAINTE_H
