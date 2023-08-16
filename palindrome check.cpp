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

bool checkpalindrome (char name[]){
  int i =0;
  int n=getlength(name);
  int j=n-1;

  while(i<=j){
     if(name[i]==name[j]){
    i++;
    j--;
  }

  else{
    return false;
  }
  }
  return true;
}

int main(){
  char name[100] = "lol";
  cout<< " is palindrome" << checkpalindrome(name);
}