     #include <iostream>
   using namespace std;
int main()
   {
       int numbers[10];
       cout << "Enter 10 values: ";
       for (int i = 0; i < 10; i++)
      {
          cin >> numbers[i];
       }
       int* ptr = numbers;
       cout << "Squared values in reverse order: ";
      for (int i = 9; i >= 0; i--)
      {
          cout << (*(ptr + i)) * (*(ptr + i)) << " ";
       }
       cout << endl;
      return 0;
   }