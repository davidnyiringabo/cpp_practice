#include<iostream>
using namespace std;
int calculate(int s){
    return s * s * s;
}
int main(){
    int s = 0;
    cout << "The the length of the side:   ";
    cin >> s;
    cout << "The volume of the cube is " << calculate(s);

    return 0;
}
