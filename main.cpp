#include <iostream>
#include "release.cpp"
using namespace std;

int main() {
  matrix Matrix; //создание объекта
  matrix *Mat= new matrix;
  float zeroMatrix[4][4]; //создание нулевой матрицы
  for (int i=0;i<4;i++) //заполнение нулевой матрицы
   for (int j=0;j<4;j++)
     zeroMatrix[i][j]=0;
  matrix M(zeroMatrix); //вызов конструктора с параметром
  while (1) {
    int x;
    cout << "Enter the punct of menu:" << endl; //меню
    cout << "1\tGet current matrix" << endl;
    cout << "2\tEnter the Matrix 4x4" << endl;
    cout << "3\tSet element of Matrix" << endl;
    cout << "4\tGet Transposed Matrix" << endl;
    cout << "5\tMultiplicate Matrix" << endl;
    cout << "6\tCopy matrix" << endl;
    cout << "7\tExit" << endl;
    cout << "Punct: ";
    cin >> x;
    switch (x) {
      case 1: {Mat->getMatrix(); break;} // вывод  текущей матрицы
      case 2: {
          cout << "Enter matrix m[4][4]:" << endl;
          for (int i=0;i<4;i++) {
            for (int j=0;j<4;j++) {
              float elem;
              cout << "m[" << (i+1) << "][" << (j+1) << "]: ";
              cin >> elem;
              Mat->setElem(i, j, elem);
            }
          }
        break;
      } //заполнение матрицы
      case 3: {
        int x, y;
        float elem;
        cout << "Enter element to change: m[x][y]:" << endl;
        cout << "x: ";
        cin >> x;
        x--;
        cout << "y: ";
        cin >> y;
        y--;
        cout << "Enter number for change:" << endl;
        cout << "m[" << (x+1) << "][" << (y+1) << "]: ";
        cin >> elem;
        Mat->setElem(x, y, elem);
        break;
      } //замена элемента
      case 4: {Mat->getTrans(); break;} //транспонирование
      case 5: {
        int num;
        cout << "Enter number for multiplication: " << endl;
        cout << "Number: ";
        cin >> num;
        Mat->getMult(num); //умножение на число
        break;
      }
      case 6: {
        matrix cpBuf=Matrix; //копирование текущего объекта в новый объект cpBuf
        break;
      }
      case 7: return 0; // выход из программы
      default: cout << "Error: Uncorrect punct" << endl; // если введен некорректный п. меню
    }
  }
}
