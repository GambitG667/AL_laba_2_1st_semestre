#include <iostream>


int main(){

    long long int res{1};

    for(int i{8}; i <= 15; ++i) res *= i;
    std::cout << res<< '\n';
    
    long long int a{};
    std::cout << "Введите число а: ";
    std::cin >> a;
    res = 1;
    for(int i = a; i <= 20; ++i) res *= i;
    std::cout << res << '\n';

    long long int b{};
    std::cout << "Введите число b: ";
    std::cin >> b;
    res = 1;
    for(int i = 1; i <= b; ++i) res *= i;
    std::cout << res << '\n';

    std::cout << "Введите числа a b: ";
    std::cin >> a >> b;
    res = 1;
    for(int i = a; i <= b; ++i) res *= i;
    std::cout << res << std::endl;


    return 0;
}