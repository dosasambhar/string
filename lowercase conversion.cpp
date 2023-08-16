#include <iostream>
using namespace std;

int getlength(char name[]){
  int length = 0;
  int i = 0;

  while(name[i]!='\0'){
    length++;
    i++;
  }
  return length;
}

int  convertupper(char name[]){
  int n = getlength(name);

  for(int i =0; i<n; i++){
    name[i]= name[i] - 'A' + 'a';
  }
}

int main() {
  char name [100];
  cin.getline(name, 100);
  convertupper(name);
  cout<< name << endl;
  return 0;
}