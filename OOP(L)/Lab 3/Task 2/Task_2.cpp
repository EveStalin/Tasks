  #include <iostream>
   using namespace std;
    int findMax(int arr[], int size)
    {
        int max = arr[0];
        for (int i = 1; i < size; i++)
        {
            if (arr[i] > max)
           {
               max = arr[i];
           }}
       return max;
   }
   int main()
   {
       int numbers[5];
       cout << "Enter 5 values: ";
       for (int i = 0; i < 5; i++)
       {
           cin >> numbers[i];
       }
       int Max = findMax(numbers, 5);
       int* ptr = &Max;
 cout << "Maximum value: " << *ptr << endl;
       return 0;
   }
