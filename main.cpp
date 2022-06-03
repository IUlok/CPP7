#include <iostream>
#include "CWhole.h"
using namespace std;

int main()
{
    CWhole WholeObject; // Создание объекта CWhole
    CWhole *WholeObjectPointers=new CWhole; // Массив указателей
    int m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12,m13,m14,m15,m16,key,punct;
    while (true)
    {
        cout<<endl;
        cout << "Enter the punct of menu:" << endl;
        cout << "1\tGet current matrix by key" << endl;
        cout << "2\tDisplay element ID's" << endl;
        cout << "3\tAdd new matrix" << endl;
        cout << "4\tDelete matrix by key" << endl;
        cout << "5\tExit" << endl;
        int* arr = new int[16]{m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12,m13,m14,m15,m16};
        cin>>punct; cout<<endl;
        switch (punct)
        {
            case 1:        // Вывод матрицы по ключу
                cout << "Enter the key:";
                cin >> key;
                WholeObjectPointers->outputid(key);
                break;
            case 2:       // Вывод текущих идентификаторов
                WholeObjectPointers->output();
                break;
            case 3:      // Добавление матрицы
                cout << "M[1][1]:"; cin >> m1;
                cout << "M[1][2]:"; cin >> m2;
                cout << "M[1][3]:"; cin >> m3;
                cout << "M[1][4]:"; cin >> m4;
                cout << "M[2][1]:"; cin >> m5;
                cout << "M[2][2]:"; cin >> m6;
                cout << "M[2][3]:"; cin >> m7;
                cout << "M[2][4]:"; cin >> m8;
                cout << "M[3][1]:"; cin >> m9;
                cout << "M[3][2]:"; cin >> m10;
                cout << "M[3][3]:"; cin >> m11;
                cout << "M[3][4]:"; cin >> m12;
                cout << "M[4][1]:"; cin >> m13;
                cout << "M[4][2]:"; cin >> m14;
                cout << "M[4][3]:"; cin >> m15;
                cout << "M[4][4]:"; cin >> m16;
                cout << "ID:";
                cin >> key;
                arr[0]=m1;
                arr[1]=m2;
                arr[2]=m3;
                arr[3]=m4;
                arr[4]=m5;
                arr[5]=m6;
                arr[6]=m7;
                arr[7]=m8;
                arr[8]=m9;
                arr[9]=m10;
                arr[10]=m11;
                arr[11]=m12;
                arr[12]=m13;
                arr[13]=m14;
                arr[14]=m15;
                arr[15]=m16;
                WholeObjectPointers->add(arr ,key);
                break;
            case 4:    // Удаление матрицы
                cout << "Enter key:";
                cin >> key;
                WholeObjectPointers->del(key);
                break;
            case 5:    // Звершение программы
                return 0;
            default:
                cout << "Error: There is not this punct at menu. Try again..." << endl;
                break;
        }
    }
}