// Find the Grade using the marks.

#include <iostream>
using namespace std;

int main(){

    int mark ;
    cout << "Enter the Mark :";
    cin >> mark;

  if(mark>=90){
cout<< "Grade A ";
  } else if(mark>=80){
cout<< "Grade B ";
  } else if(mark>=65){
cout<< "Grade C ";
  } else if(mark>=50){
cout<< "Grade D ";
  }else{
cout<< "Grade F ";
  }
  cout <<" "<<endl;
    return 0;
}