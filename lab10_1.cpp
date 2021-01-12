#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    cout<<"Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    string grade[] = {"A","B+","B","C+","C","D+","D","F","W"};
    srand(time(0));
    int i = rand()%9;
    cout<<"You will get "<< grade[i] << " in this 261102.";
    return 0;
}
