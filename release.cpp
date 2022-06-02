#include "header.h"
#include <iostream>
using namespace std;

int i;
Matrix::Matrix() {} //конструктор по умолчанию
Matrix::Matrix(int m[4], int key)  //конструктор с параметрами
{
    m_key=key;
    for(i=0;i<4;i++)
        m_M[i] = m[i];
}
Matrix::~Matrix() //деструктор
{
    cout<<"Matrix was deleted"<<endl;
}
void Matrix::gm_M(int* arr)  //получение значений элементов матрицы из private
{
    for(i=0;i<4;i++)
        arr[i] = m_M[i];
}
int Matrix::gid() //получение идентификатора из private
{
    return m_key;
}
int Matrix::chec(int id) //проверка идентификатора
{
    if (id == m_key)
        return 1;
}