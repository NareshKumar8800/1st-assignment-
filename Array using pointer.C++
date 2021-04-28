#include <iostream>
using namespace std;
int main()
 {
   int arr[5] = {1, 2, 3, 5, 4};
   int *ptr = &arr[0];
   cout<<"Enter Elements: ";
   for(int i = 0; i < 5; i++)
  {
      cout<< "You entered"<<*ptr <<endl;
      ptr++;
   }
   return 0;
}
