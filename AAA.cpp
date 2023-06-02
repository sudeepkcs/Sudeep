#include<iostream>
using namespace std;
//void fun(int);
void funfun(int,int);

int main()
{
    int z,y;    
    cout<<"Enter first Number";
    cin>>y;
    cout<<"Enter 2nd Number";
    cin>>z;
    //fun(y);
    funfun(y,z);
    return 0;
}
void funfun(int x,int y)
{
    cout<<"Prime Numbers are :";

    for(int j=x;j<=y;j++)
    {
        int status = 0;
        for(int k=1;k<=j;k++){
        if(j%k==0)
            status++;
        }
    if (status <= 2)
        cout<<endl<<j;

    }
}

void fun(int x)
{
        int status = 0;
        for(int i=1;i<=x;i++)
    {
        if(x%i==0)
            status++;
    }
    if (status >2)
        cout<< "The Number is Not Prime";
    else 
        cout << "Number is Prime";

}


