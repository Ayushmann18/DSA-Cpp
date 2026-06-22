//Funtion syntax and examples
#include <iostream>
using namespace std;
int getMultiplication(int x, int y, int z){
    int result = x*y*z;
    return result;
}
void printNametenTimes(){
    for (int i = 0; i<=10; i++){
        cout<<"Ayushmann"<<endl;

    }
}
void printMultiplicationTable(int n){
    for(int i = 1; i<=10; i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}
float convertintoCelsius(float far){
    float celsius = (far-32)*5/9;
    return celsius;
}
int main(){
    int multiplicationAnswer = getMultiplication(5,4,3);
    cout<< multiplicationAnswer <<endl;
    printNametenTimes();
    printMultiplicationTable(10);
    float celsius = convertintoCelsius(100);
    cout<<celsius<<endl;
    return 0;
}