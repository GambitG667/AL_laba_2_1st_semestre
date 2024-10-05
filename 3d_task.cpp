#include <iostream>



int main(){
    for(int i{1}; i < 10; ++i){
        std::cout <<i<< " x 7 = "<< i*7<<'\n';
    }
    std::cout << std::endl;

    int N{};

    std::cout << "\nВведите N: ";
    std::cin >> N;

    for(int i{1}; i < 10; ++i){
        std::cout <<i<< " x "<<N<<" = "<< i*N<<'\n';
    }
}