#include <iostream>

using namespace std;
int t,n;
char T,I,M,u,r;
string str;
bool checkT,checkm,checkI,checku,checkr;
int main()
{
    T=84;
    I=105;
    M=109;
    u=117;
    r=114;
    cin>>t;
    for(int i=0;i<t;i++){
        checkT=false;
        checkm=false;
        checkI=false;
        checku=false;
        checkr=false;
        cin>>n;
        if(n!=5){
            cin>>str;
            cout<<"NO"<<endl;
        }
        else{
        cin>>str;
            for(int k=0;k<n;k++){
                if(str[k]==T){
                    str[k]=35;
                    checkT=true;
                }
                if(str[k]==I){
                    str[k]=35;
                    checkI=true;
                }
                if(str[k]==M){
                    str[k]=35;
                    checkm=true;
                }
                if(str[k]==u){
                    str[k]=35;
                    checku=true;
                }
                if(str[k]==r){
                    str[k]=35;
                    checkr=true;
                }
            }
        if(checkT
            &&checkI
            &&checkm
            &&checku
        &&checkr){
                cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
    }
    return 0;
}
