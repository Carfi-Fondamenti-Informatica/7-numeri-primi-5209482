#include <iostream>
#include "lib.h"
using namespace std;

int main(){
   int n;
  cin >> n;
  int ris = numeriprimi(n,n-1);
  if (ris){
    cout << "numero primo";
}
  else {
    cout << "numero non primo";
  }
  return 0;
}
  
