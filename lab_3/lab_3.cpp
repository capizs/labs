/*Вывести значение i-го бита числа x (0<x<10^9).*/

#include <iostream>
 
int main()
{
    int x, i;
    std::cin >> x >> i; 
    std::cout << ((x >> (i-1)) & 1u);
} 