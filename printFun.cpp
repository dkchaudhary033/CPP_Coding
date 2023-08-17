#include <iostream>

using namespace std;

int printFun(int x , int z ){
    
    int sum= x+z;
    return sum;

}

int main()
{
    int a,b;
    int sum=0;
    cout << "enter the two number:";
    cin>> a >> b;
    sum=printFun(a,b);
    cout<< sum << endl;
    return 0;
}