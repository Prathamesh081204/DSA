#include<iostream>

using namespace std ;

int main(){
    int x ;
    int factors =0 ;
    int y =1 ;
    cout<< "enter the number ";
    cin>> x ;

    for(y ; y <= x ; y++){
        if(x % y == 0){
            factors++ ;
        }
    }

    if(factors == 2){
        cout<< x ;
    }

    return 0 ;

}