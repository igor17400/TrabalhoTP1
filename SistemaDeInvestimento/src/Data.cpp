#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>
#include <ctime>
#include <iostream>
#include <string>

#include "Data.h"

using namespace std;

Data::Data(string data) {
    SetData(data);
}

void VerificaData(string data) {
    if (data == "0000" ) {
        throw invalid_argument("Data é inválida.");
    }
}

void Data::SetData(string data) {
    this->data = data;
}

void Data::Print() const {
    cout << "Data em que a Aplicação foi criada: " << this->data << endl;
}
