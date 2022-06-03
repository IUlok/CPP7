#include "header.h"
#include <iostream>

class CWhole
{
    int Amount;
public:
    Matrix* m_p[20]; // Массив указателей на объкты-части
    CWhole(); // Конструктор
    ~CWhole(); // Деструктор
    int getAmount(); // Метод для получения количества элементов
    void del(int id); // Метод для удаления объекта по ключу
    void add(int m[16], int key); // Метод для добавления объекта
    int search(int id); // Метод поиска по ключу
    void output(); // Вывод всех матриц
    void outputid(int id); // Вывод матрицы по ключу
};