#include <math.h>
 
using namespace std; 
 
float numFinalx,numFinaly,numFinal,;

struct tComplexos{

void tranferindo(float a,float b,float c,float d);

numx1=a
numy1=b
numx2=c
numy2=d


void soma(){

        numFinalx=num1x+num2x;
        numFinaly=num1y+num2y;
        cout << "O resultado e: "<<numFinalx<<"+("<<numFinaly<<"i)";
}

void subtracao(){
        
        numFinalx=num1x-num2x;
        numFinaly=num1y-num2y;
        cout << "O resultado e: "<<numFinalx<<"+("<<numFinaly<<"i)";
}

void multiplicacao(){

        numFinalx=(num1x*num2x - num1y*num2y);
        numFinaly=(num1x*num2y + num1y*num2x);
        cout << "O resultado e: "<<numFinalx<<"+("<<numFinaly<<"i)";;

}

void divisao(){

    numFinalx=(num1x*num2x+num1y*num2y)/(num2x*num2x+num2y*num2y);
    numFinaly=(num2x*num1y-num1x*num2y)/(num2x*num2x+num2y*num2y);
    cout << "O resultado e: "<<numFinalx<<"+("<<numFinaly<<"i)";

}

void modulo(){

    numFinalx=(num1x*num2x+num1y*num2y)/(num2x*num2x+num2y*num2y);
    numFinaly=(num2x*num1y-num1x*num2y)/(num2x*num2x+num2y*num2y);
    cout << "O resultado e: "<<numFinalx<<"+("<<numFinaly<<"i)";

}
};
