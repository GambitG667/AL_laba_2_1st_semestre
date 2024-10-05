#include <utility>
#include <iostream>






int main(){

    std::pair<int, int> positionA;
    std::pair<int, int> positionB;

    std::cout << "Введите первую позицию: ";
    std::cin >> positionA.first >> positionA.second;

    std::cout << "Введите вторую позицию: ";
    std::cin >> positionB.first >> positionB.second;

    if(positionA.first == positionB.first || positionA.second == positionB.second)
    std::cout << "Ладья угрожает\n"; 
    else std::cout << "Ладья не угрожает\n";

    if(abs(positionA.first - positionB.first) && abs(positionA.second - positionB.second))
    std::cout << "Слон угрожает\n"; 
    else std::cout << "Слон не угрожает\n";

    if(abs(positionA.first - positionB.first) <= 1 && abs(positionA.second - positionB.second) <= 1)
    std::cout << "Король угрожает\n"; 
    else std::cout << "Король не угрожает\n";

    if(positionA.first == positionB.first || positionA.second == positionB.second \
    || (abs(positionA.first - positionB.first) && abs(positionA.second - positionB.second)))
    std::cout << "Ферзь угрожает\n"; 
    else std::cout << "Ферзь не угрожает\n";

    if (positionB.second - positionA.second == 1){
        if(positionA.first == positionB.first) std::cout << "Пешка попадет обычным ходом\n";
        if(abs(positionA.first - positionB.first) == 1) std::cout << "Пешка попадет при нападении \n";
    }else{
        std::cout << "Пешка не угрожает\n";
    }

    return 0;
}