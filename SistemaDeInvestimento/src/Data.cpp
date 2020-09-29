#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdexcept>
#include <ctime>
#include <iostream>
#include <string>
#include <time.h>
#include <algorithm>

#include "Data.h"

using namespace std;

Data::Data() {}

Data::Data(string data) {
    SetData(data);
}

void Data::VerificaData(string data) {

    try {
        // Converter data para array de caracteres para que sua manipulação seja
        //      mais fácil
        int n = data.length();
        char char_data[n + 1];
        strcpy(char_data, data.c_str());

        // Definição de variáveis para a conversão do string para dia, mes e ano
        time_t rawtime;
        struct tm * timeinfo;
        int year, month ,day;;

        // Conversão da string entrada pelo usuário em dia, mês e ano
        replace( char_data, char_data+strlen(char_data), '/', ' ' );
        istringstream( char_data ) >> day >> month >> year;

        // Verificação dos valores entrados
        if(day > 31 || month > 12 || year > 2099 || year < 2020)
            throw invalid_argument("Data é inválida.");
    } catch (int n) {
      throw invalid_argument("Data é inválida.");
  }
}

void Data::SetData(string data) {
    VerificaData(data);
    this->data = data;
}

string Data::GetData(){
    return this->data;
}

void Data::Print() const {
    cout << "Data em que a Aplicação foi criada: " << this->data << endl;
}
