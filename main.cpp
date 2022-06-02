#include <iostream>
#include "CWhole.h"
using namespace std;

int main()
{
    CWhole W; // Создание объекта CWhole
    CWhole *W2=new CWhole; // Массив указателей
    int m1,m2,m3,m4,key,punct;
    while (1)
    {
        cout<<endl;
        cout << "Enter the punct of menu:" << endl;
        cout << "1\tGet current matrix by key" << endl;
        cout << "2\tDisplay element ID's" << endl;
        cout << "3\tAdd new matrix" << endl;
        cout << "4\tDelete matrix by key" << endl;
        cout << "5\tExit" << endl;
        int* arr = new int[4]{m1,m2,m3,m4};
        cin>>punct; cout<<endl;
        switch (punct)
        {
            case 1:        // Вывод матрицы по ключу
                cout << "Enter the key:";
                cin >> key;
                W2->outputid(key);
                break;
            case 2:       // Вывод текущих идентификаторов
                W2->output();
                break;
            case 3:      // Добавление матрицы
                cout << "M[1][1]:"; cin >> m1;
                cout << "M[1][2]:"; cin >> m2;
                cout << "M[2][1]:"; cin >> m3;
                cout << "M[2][2]:"; cin >> m4;
                cout << "ID:";
                cin >> key;
                arr[0]=m1;
                arr[1]=m2;
                arr[2]=m3;
                arr[3]=m4;
                W2->add(arr ,key);
                break;
            case 4:    // Удаление матрицы
                cout << "Enter key:";
                cin >> key;
                W2->del(key);
                break;
            case 5:    // Звершение программы
                return 0;
            default:
                cout << "Error: There is not this punct at menu. Try again..." << endl;
                break;
        }
    }
}