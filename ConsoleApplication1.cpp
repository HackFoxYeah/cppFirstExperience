#include <iostream> //preprocessor
#include <string>
#include <ctime>
using namespace std; //namespace
  class ArrayHelp //class
  {
      public:
          static int GetLength(int *array) //public static method (function)
          {
              if (*array != NULL)
              {
                  int count = 0;
                  while (*array != NULL)
                  {
                      count++;
                      *array++;
                  }
                  return count;
              }
          }
  };
  int main()
  {
      setlocale(LC_ALL, "ru"); // russian language support
      srand(time(0)); //random numbers enable
      cout << "Программа генерирует массив случайных целых чисел размерностью n и вывод на экран все его элементы, кратные m.\n";
      int n, m;
      cout << "Введите n: ";
      cin >> n;
      cout << "\n";
      cout << "Введите m: ";
      cin >> m;
      cout << "\n";
      int *array = new int[n];
      cout << "Элементы массива, кратные " + to_string(m) + "(m):\n";
      for (int i = 0; i < ArrayHelp::GetLength(array); i++)
      {
          array[i] = 0 + rand() % n;
          if (array[i] % m == 0)
              cout << array[i] << " ";
      }
      return 0;
  }    
