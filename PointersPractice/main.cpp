#include <iostream>
using namespace std;

void doSomething(int&);

int main()
{
    bool result;
      int a = 1, b = 3;
			result = a < b || b <= 2;
			if(result) cout << a;
		   else cout << b;



   return 0;
}

void doSomething(int& num)
{
   num = 0;
   cout << num << endl;
}
