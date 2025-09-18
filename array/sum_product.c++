#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;   
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int sum = 0;
    int product = 1;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        product=product*arr[i];
    }
    cout<<"sum = "<<sum<<endl;
    cout<<"product = "<<product<<endl;
    return 0;

}