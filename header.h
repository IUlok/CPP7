class matrix { // описание класса
private: // описание переменных
  int x,y;
  float elem;
public: // описание методов
  float m[4][4]; // создание матрицы, паблик из-за перегрузки
  matrix(); // конструктор без параметра
  matrix(float zeroMatrix[4][4]); // конструктор с параметром
  void getMatrix(); // Вывод матрицы
  void setElem(int, int, float); // замена элемента
  void getTrans(); // транспонирование
  void getMult(int num); // умножение матрицы
  matrix(const matrix &obj); // конструктор копирования
  ~matrix(); // деструктор класса
};
