#ifndef TAXA_H
#define TAXA_H


#include <stdio.h>
#include <stdexcept>

using namespace std;

class Taxa
{
    public:
        Taxa(double taxa=0.0);
        void ValidarTaxa(double) throw (invalid_argument);
        void SetTaxa(double) throw (invalid_argument);
        double GetTaxa();

        void Print() const;

    protected:

    private:
        double taxa;
};

#endif // TAXA_H
