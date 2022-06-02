#include "CWhole.h"
#include <iostream>
using namespace std;

CWhole :: CWhole() // Конструктор
{
    kol = 0;
}
CWhole ::~CWhole() // Деструктор
{
    for (int i = 0; i < kol; i++)
        delete m_p[i];
}
void CWhole::add(int m[4], int key) // Метод добавления элемента
{
    if (search(key) < 0)
    {
        m_p[kol] = new Matrix(m,key);
        kol++;
        cout<<"New element was added"<<endl;
    }
    else
        cout<<"Error: Elem with this ID already exist!"<<endl;
}
int CWhole::search(int id) // Метод поиск по ключу
{
    for (int i = 0; i < kol; i++)
        if ((m_p[i]->chec(id))==1)
            return i;
    return -1;
}
void CWhole::del(int id)  // Метод удаления матрицы по ключу
{
    int d = search(id);
    if (d >= 0)
    {
        delete m_p[d];
        while (d < kol - 1)
        {
            m_p[d] = m_p[d + 1];
            d++;
        }
        kol--;
    }
}
int CWhole::getn() // Метод получения количества элементов
{
    return kol;
}
void CWhole::output() // Метод для вывода матрицы
{
    for (int i=0; i < kol; i++)
    {
        cout << "ID: " <<m_p[i]->gid() << endl;
    }
    if(kol==0)
        cout<<"There is not Matrix!"<<endl;
}
void CWhole::outputid(int id) //вывод по ключу
{
    {
        for (int i = 0; i < kol; i++)
            if (m_p[i]->chec(id))
                id = i;
        int *arr = new int[4];
        m_p[id]->gm_M(arr);
        cout <<  arr[0] << " ";
        cout <<  arr[1] << endl;
        cout <<  arr[2] << " ";
        cout  << arr[3] << endl;
        cout << endl;
    }
}