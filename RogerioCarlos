#include <iostream>
#include <fstream>
#include <clocale>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "complexos.h"

using namespace std;
fstream arquivo;


int main(){

    float num1x,num1y,num2x,num2y;
    string OP;


    cout << "Informe a operacao matematica desejada(soma,subtracao,multiplicacao,divisao,modulo): ";
    cin >> OP ;

    cout << "informe o numero x do numero complexo 1 (z=x+y.i): ";
    cin >> num1x;
    cout << "informe o numero y do numero complexo 1 (z=x+y.i): ";
    cin >> num1y;

    cout << "informe o numero x do numero complexo 2 (z=x+y.i): ";
    cin >> num2x;
    cout << "informe o numero y do numero complexo 2 (z=x+y.i): ";
    cin >> num2y;

    tComplexos complexo;
    
    complexo.tranferindo(num1x,num1y,num2x,num2y);
    complexo.soma();
    comlexo.subtracao();
    complexo.multiplicacao();
    complexo.divisao();
    complexo.modulo();


return 0;
}
