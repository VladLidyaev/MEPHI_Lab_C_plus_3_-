#include <iostream>
#include "vector_D.h"

using namespace Data_Types;

Vector process(Vector v1,Vector v2,char operation){
    Vector res;
    switch(operation){
        case '+':
            res = v1 + v2;
            break;
        case '-':
            res = v1 - v2;
            break;
    }
    return res;
}

int main() {

    std::cout << "Выберите размерность векторов " << std::endl;
    int size;
    std::cin >> size;

    bool end = false;
    bool cont = false;
    Vector vector1(size),vector2(size);
    char operation;


    while (end == false){

        if (cont == false){
            std::cout << "Введите первый вектор: " << std::endl;
            std::cin >> vector1;
        }
        std::cout << "Введите операцию: " << std::endl;
        std::cin >> operation;
        std::cout << "Введите второй вектор: " << std::endl;
        std::cin >> vector2;
        std::cout << "Полученный вектор: " << std::endl;
        Vector res = process(vector1,vector2,operation);
        std::cout << res << std::endl;
        std::cout << "\n 0: Завершить работу. \n 1: Начать новые вычисления. \n 2: Продолжить работу над полученным вектором." << std::endl;
        int Ans;
        std::cin >> Ans;
        switch (Ans) {
            case 0:
                end = true;
                break;
            case 1:
                cont = false;
                break;
            case 2:
                cont = true;
                vector1 = res;
                break;
        }
    }
    return 0;
}
