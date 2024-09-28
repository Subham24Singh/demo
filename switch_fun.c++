#include<iostream>
using namespace std;
/*
int power(int a,int b){
    int ans=1;
    for(int i=0;i< b ;i++){
    ans=ans * a;
    }
    return ans;
}
int main(){
    int a,b;
cout<<"enter a and b:";
cin>>a>>b;
int answer= power(a,b);
cout<<"the power of "<<a<<"raised to "<<b<<"is: "<<answer;

return 0;
}



bool iseven(int a){
    if(a & 1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    cout<<"enter num: ";
    cin>>num;
    if(iseven(num)){
        cout<<"number is even";
    }
    else{
        cout<<"number is odd";
    }
}



int main(){
    while(1){
        cout<<"how are you:";
        int num = 1;
        switch(num){
            case 1: cout<<"ya ya ya ya ";
            break;
        }
        exit(0);   // by using exit-statement, we exit out infinite loop
    }
}



int main(){
    int amt;
    cout<<"enter the amount: ";
    cin>>amt;
    int rs100,rs50,rs20,rs10,rs1;
    switch(1){

        case 1: rs100=amt/100;
        amt=amt%100;
        cout<<"no. of 100 rupee note:"<<rs100<<endl;

        case 2: rs50=amt/50;
        amt=amt%50;
        cout<<"no. of 50 rupee note:"<<rs50<<endl;

        case 3: rs20=amt/20;
        amt=amt%20;
        cout<<"no. of 20 rupee note:"<<rs20<<endl;

        case 4: rs10=amt/10;
        amt=amt%10;
        cout<<"no. of 10 rupee note:"<<rs10<<endl;

        case 5: rs1=amt/1;
        amt=amt%1;
        cout<<"no. of 1 rupee note:"<<rs1<<endl;
    }
}



int fibonacci(int n){
    int a =0,b=1;
    for(int i=2;i<n;i++){
        int next = a+b;
        a =b;
        b = next;
    }
    return b;
}
int main(){
    int n;
    cout<<"enter value of n: ";
    cin>>n;
    cout<<"the "<<n<< "th term of the series is= "<<fibonacci(n)<<endl;
    return 0;
}



void printcounting(int n){
    for(int i =1;i<=n; i++){
        cout<<i<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    printcounting(n);
    return 0;
}


int factorial(int n){
    int fact=1;
        for(int i=1;i<=n;i++){
            fact= fact*i;
        }
        return fact;
    }
    int nCr(int n,int r){                                           // nCr = 8C2
        int num = factorial(n);                                     // 8! / 2!(8-2)!
        int deno= factorial(r)*factorial(n-r);
        int ans = num/deno;
        return ans;
    }
    int main(){
        int n,r;
        cout<<"enter n and r :";
        cin>>n>>r;
        cout<<"answer is :"<<nCr(n,r)<<endl;
    return 0;
    }*/
    

    #include <iostream>
using namespace std;

int main() {                                            //factorial
    int num, factorial = 1;
    cin >> num;
    do {
        factorial *= num;
        num--;
    } while (num > 0);
    cout << factorial;
    return 0;
}
