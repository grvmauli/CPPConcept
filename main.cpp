#include <iostream>

using namespace std;
void Swap(int x, int y){
    int temp = x;
    x = y;
    y =temp;

}

void Swaptr(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y =temp;

}
void Swapref(int &x, int &y){
    int temp = x;
    x = y;
    y =temp;

}
int main()
{
    int a = 5,b=10;
    Swap(a,b);
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    Swaptr(&a,&b);
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    Swapref(a,b);
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;

    return 0;
}
