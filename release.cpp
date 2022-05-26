#include "header.h"
using namespace std;

  matrix::matrix() {
    for (int i = 0;i<4;i++) {
      for (int j=0;j<4;j++) {
        m[i][j]=0; // заполнение матрицы класса нулями
      }
    }
    cout << "Constructor called" << endl;
  }
  matrix::matrix(float zeroMatrix[4][4]) {
    for (int i=0;i<4;i++) {
      for (int j=0;j<4;j++) {
        m[i][j]=zeroMatrix[i][j]; // присвоение матрице класса значений нулевой матрицы
      }
    }
    cout << "Constructor params called" << endl;
  }
  void matrix::setElem(int x, int y, float elem) { // ф-ция замены  элемента
    m[x][y] = elem;
  };
  void matrix::getTrans() { // транспонирование через третью переменную
    float a=0;
    for (int i=0;i<4;i++) {
      for (int j=i;j<4;j++) {
        a=m[i][j];
        m[i][j]=m[j][i];
        m[j][i]=a;
      }
    }
  };
  void matrix::getMult(int num) {
    for (int i=0;i<4;i++) {
      for (int j=0;j<4;j++) {
        m[i][j]=m[i][j]*num; // умножение матрицы поэлементно
      }
    }
  };

  matrix::matrix(const matrix &obj) { // ф-ция копирования матрицы
    for (int i=0;i<4;i++)
      for (int j=0;j<4;j++)
        m[i][j] = obj.m[i][j]; // присвоение поэлементно значений м-цы класса значениям м-цы другого класса
    cout << "Matrix has copied" << endl;
  }

  void matrix::getMatrix() {
    for (int i=0;i<4;i++) {
      for (int j=0;j<4;j++) {
        cout << m[i][j] << "\t"; // вывод матрицы поэлементно!
      }
      cout << endl;
    }
  };

  matrix::~matrix() { // вызов деструктора
    cout << "Destructor called" << endl;
  }

  ostream& operator<<(ostream &stream, matrix obj) {
    for (int i=0;i<4;i++) {
      for (int j=0;j<4;j++) {
        stream<<obj.m[i][j]<<"  ";
      }
      stream<<endl;
    }
    return stream; // перегрузка
  };
