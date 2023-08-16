#include <iostream>
#include <string>
using namespace std;

int getLength(char name[]){
int i=0;
int length=0;

while(name[i] != '\0'){
  length ++;
  i++;
}
return length;
}

int reverse(char name[]){
 int i =0;
 int n = getLength(name);
 int j = n-1;
while(i<=j){
  swap(name[i], name[j]);
  i++;
  j--;
}
}

int main() {
  char name [100];
  cin>> name;

  reverse(name);
  cout<<name<< endl;
  return 0;
}