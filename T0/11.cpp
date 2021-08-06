#include <iostream>
using namespace std;

int main() {
  int array[50];

  for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
      array[i] = i*2;
   }
  for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
      cout << array[i] << " ";
   } 
 }
  
