#include <iostream>
using namespace std; 

int main(){
    int num1, num2, sum; 
    string operatorInput; 
    string opVal; 
    std::cout << "Start calculating" << std::endl; 
    std::cin >> num1 >> operatorInput >> num2; 
    if(operatorInput == "+"){
        sum = num1 + num2; 
    }
    if(operatorInput == "-"){
        sum = num1 + num2; 
    }
    if(operatorInput == "/"){
        sum = num1 / num2; 
    }
    if(operatorInput == "*"){
        sum = num1 * num2; 
    }
    std::cout<< sum << std::endl; 
}

