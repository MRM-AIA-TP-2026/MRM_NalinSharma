#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string x = argv[1];
  
  //add code below this line
  if(x=="red" || x=="blue" || x=="yellow"){
    cout<<x<< " is a primary color";
  }
  else{
    cout<<x<< " is not a primary color";   
  }



  //add code above this line
  
  return 0;
  
}
