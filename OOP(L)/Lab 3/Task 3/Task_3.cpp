  #include <iostream>
   using namespace std;
   int larger(int a, int b)
    {
        return (a > b) ? a : b;
    }
    int main()
   {
       int (*fp)(int, int) = larger;
      int x, y;
      cout << "Enter two values: ";
       cin >> x >> y;
       if (x == y)
       {
           cout << "Both numbers are equal." << endl;
       }
      else
       {
           cout << fp(x, y) << " is greater." << endl;
      }
       return 0;
   }

