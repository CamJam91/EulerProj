#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    for (int target = 3; target < 1000; target++){
        if ((target%3) == 0){
            sum += target;
        }else if ((target % 5 == 0)){
            sum += target;
            }
    }
    cout << "Sum: " << sum << endl;
}