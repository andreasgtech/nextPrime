#include <iostream>

using namespace std;

int main(void){
    int n=0;
    cin>>n;
    n++;
    int i,b,a=1;
    while (a==1){
        b=0;
        i=2;
        if (n%i==0 && n!=2){
            b=1;
        }
        i++;
        while (i*i<=n && b==0){
                if (n%i==0){
                    b=1;
                }
                i+=2;
        }
        if (b==0){
            a=0;
            cout<<n;
        }
        n++;
    }
}
