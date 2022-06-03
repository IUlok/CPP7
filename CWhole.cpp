#include "CWhole.h"
#include <iostream>
using namespace std;

CWhole :: CWhole() // Конструктор
{
    Amount = 0;
}
CWhole ::~CWhole() // Деструктор
{
    for (int i = 0; i < Amount; i++)
        delete m_p[i];
}
void CWhole::add(int m[16], int key) // Метод добавления элемента
{
    if (search(key) < 0)
    {
        m_p[Amount] = new Matrix(m,key);
        Amount++;
        cout<<"New element was added"<<endl;
    }
    else
        cout<<"Error: Elem with this ID already exist!"<<endl;
}
int CWhole::search(int id) // Метод поиск по ключу
{
    for (int i = 0; i < Amount; i++)
        if ((m_p[i]->tryingKey(id))==1)
            return i;
    return -1;
}
void CWhole::del(int id)  // Метод удаления матрицы по ключу
{
    int d = search(id);
    if (d >= 0)
    {
        delete m_p[d];
        while (d < Amount - 1)
        {
            m_p[d] = m_p[d + 1];
            d++;
        }
        Amount--;
    }
}
int CWhole::getAmount() // Метод получения количества элементов
{
    return Amount;
}
void CWhole::output() // Метод для вывода матрицы
{
    for (int i=0; i < Amount; i++)
    {
        cout << "ID: " <<m_p[i]->gid() << endl;
    }
    if(Amount==0)
        cout<<"There is not Matrix!"<<endl;
}
void CWhole::outputid(int id) //вывод по ключу
{
    {
        for (int i = 0; i < Amount; i++)
            if ((m_p[i]->tryingKey(id))==1)
                id = i;
        int *arr = new int[16];
        m_p[id]->gm_M(arr);
        cout <<  arr[0] << " ";
        cout <<  arr[1] << " ";
        cout <<  arr[2] << " ";
        cout  << arr[3] << endl;
        cout <<  arr[4] << " ";
        cout <<  arr[5] << " ";
        cout <<  arr[6] << " ";
        cout  << arr[7] << endl;
        cout <<  arr[8] << " ";
        cout <<  arr[9] << " ";
        cout <<  arr[10] << " ";
        cout  << arr[11] << endl;
        cout <<  arr[12] << " ";
        cout <<  arr[13] << " ";
        cout <<  arr[14] << " ";
        cout  << arr[15] << endl;
        cout << endl;
    }
}