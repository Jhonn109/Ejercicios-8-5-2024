#include <iostream>
using namespace std;
int main()
{
  int n,i,s;
  int p = 1;
  cout <<"ingrese un valor entero n:";
  cin >> n;
  for( int i=n-1; i>=2; i=i-1)
  {
    int modulo = n % i;
    if(modulo == 0)
    {
        cout << n<< " no es primo" << "\n";
        p = 0;
        break;
    
    }

}
if   (p)
{
    cout << n<<"es primo";   
}
    return 0;
}