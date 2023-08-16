#include <iostream>
#include <string>
using namespace std;

int getlength(char name[]){
  int length=0;
  int i=0;
  while(name[i] != '\0'){
    length++;
    i++;
  }
  return length;
}

int replaceword(char name[]){
  int n = getlength(name);
    for(int i=0; i<n-1; i++){
      if(name[i]==' '){
        name[i]='@';
      }
  }
}

int main(){
  char name[100];
  cin.getline(name, 100);

  replaceword(name);
  cout<< name;
}