// Make a file in your preferred language and start solving!

#include<iostream>

/*
int weirdAlgo(int n){
    std::cout<<n<<" ";
    if(n==1) {return n;}
    if(n&1) {weirdAlgo(n*3+1);}
    else {weirdAlgo(n/2);}
}
*/

void weirdAlgoLoop(unsigned long long int n){
    while (n!=1){
        std::cout<<n<<" ";
        if(n&1)n=n*3+1;
        else n/=2;
    }
    std::cout<<n<<" ";
}

int main(){
    unsigned long long int n;
    std::cin>>n;
    weirdAlgoLoop(n);
    return 0;
}