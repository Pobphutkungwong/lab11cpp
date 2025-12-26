#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void functionsrand(int ax)
{
    if (ax == 1) {
        cout << "You will get A in this 261102.";
    }else if (ax == 2) {
        cout << "You will get B+ in this 261102.";
    }else if(ax == 3) {
        cout << "You will get B in this 261102.";
    }else if(ax == 4) {
        cout << "You will get C+ in this 261102.";
    }else if(ax == 5) {
        cout << "You will get C in this 261102.";
    }else if(ax == 6) {
        cout << "You will get D+ in this 261102.";
    }else if(ax == 7) {
        cout << "You will get D in this 261102.";
    }else if(ax == 8) {
        cout << "You will get F in this 261102.";
    }else if(ax == 9){
        cout << "You will get W in this 261102.";
    }
}

int main()
{
    srand(time(0));
    int as = rand() % 9 + 1;
    cout << "Press Enter 3 times to reveal your future."; 
    cin.get();
    cin.get();
    cin.get();
    functionsrand(as);
}