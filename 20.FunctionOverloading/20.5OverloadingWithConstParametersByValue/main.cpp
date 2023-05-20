#include <iostream>


/*
int max(int a, int b){
    return (a > b)? a : b;
}
*/


int max( int a,  int b);

int main(){

    int first {11};
    int second {11};

    std::cout << max(first, second) << std::endl;
    std::cout << first << second << std::endl;
   
    return 0;
}

int max( int a,  int b){
    ++a;
    return (a > b)? a : b;
}