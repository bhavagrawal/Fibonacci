#include <iostream>

using namespace std;

int fib(int num) {
    if(num == 1 || num == 2) {
        return num;
    }

    else {
        return fib(num-1) + fib(num-2);
    }

}

int main() 
{
   cout << fib(5) << endl;
   cout << fib(2) << endl;
}