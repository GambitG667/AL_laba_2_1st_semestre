#include <iostream>

bool XOR(bool a, bool b){
    return (a || b) && (!a || !b);
}

int main(){

    int X, Y, Z;
    std::cout << "Введите три числа: ";
    std::cin >> X >> Y >> Z;

    if(X%2==1 && Y%2 == 1){
        std::cout << "X и Y - нечетные                         condition is true\n";
    }else{
        std::cout << "X и Y - нечетные                         condition is false\n";
    }

    if(XOR(X<20, Y<20)){
        std::cout << "только одно из X Y меньше 20             condition is true\n";
    }else{
        std::cout << "только одно из X Y меньше 20             condition is false\n";
    }
    
    if(X < 0 && Y < 0 && Z < 0){
        std::cout << "все числа отрицательные                  condition is true\n";
    }else{
        std::cout << "все числа отрицательные                  condition is false\n";
    }
    if(XOR(X%5==0, XOR(Y%5==0, Z%5==0))){
        std::cout << "только одно число из X Y Z кратно пяти   condition is true\n";
    }else{
        std::cout << "только одно число из X Y Z кратно пяти   condition is false\n";
    }
    if(X > 100 || Y > 100 || Z > 100){
        std::cout << "хотябы одно число из X Y Z больше 100    condition is true\n";
    }else{
        std::cout << "хотябы одно число из X Y Z больше 100    condition is false\n";
    }
    


    return 0;
}