//#include "header.h"
#include "CWhole.h"
#include <iostream>
using namespace std;

Matrix::Matrix() {} //конструктор по умолчанию
Matrix::Matrix(int m[16], int key)  //конструктор с параметрами
{
    m_key=key;
    for(int i=0;i<16;i++)
        m_M[i] = m[i];
}
Matrix::~Matrix() //деструктор
{
    cout<<"Matrix was deleted"<<endl;
}
void Matrix::gm_M(int* arr)  //получение значений элементов матрицы из private
{
    for(int i=0;i<16;i++)
        arr[i] = m_M[i];
}
int Matrix::gid() //получение идентификатора из private
{
    return m_key;
}
int Matrix::tryingKey(int id) //проверка идентификатора
{
    if (id == m_key)
        return 1;
    else
        return -1;
}