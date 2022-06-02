#include <iostream>

class Matrix
{
    int m_M[4];	// Элементы матрицы
    int m_key; // Идентификатор
public:
    Matrix();	// Конструктор
    Matrix(int m[4], int key);	// Конструктор с параметрами
    ~Matrix(); // Деструктор
    void gm_M(int* arr);	// Метод для получения значений матрицы из Private
    int chec(int key); // Проверка идентификатора
    int gid(); //Метод для получения идентификатора матрицы из Private
};