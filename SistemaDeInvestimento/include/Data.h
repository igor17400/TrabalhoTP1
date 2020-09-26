#ifndef DATA_H
#define DATA_H


#include <stdio.h>
#include <string.h>
#include <stdexcept>

using namespace std;

class Data
{
    public:
        Data(string data);

        void VerificaData(string);
        void SetData(string);
        string GetData();

        void Print() const;

    protected:

    private:
        string data;
};

#endif // DATA_H
