#include "adder.h"
#include <iostream>

using namespace ADDER;
using namespace std;

int Adder::process(){
    return op1 + op2;
}
Adder::Adder(int a, int b){
    op1 = a; op2 = b;
}

void Calculator::run(){
    cout << "Input 두 개의 수">>;
    int a, b;
    cin >> a >> b;
    Adder adder(a,b);
    cout << adder.process();
}