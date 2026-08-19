#include <iostream>

using namespace std;
int sum_odd(int arr[],int size){
int sumO=0;
for(int i=0;i<size;i++){
if(arr[i]%2!=0){
    sumO+=arr[i];
 }
}
return sumO;
}
int sum_even(int arr[],int size){
int sumE=0;
for(int i=0;i<size;i++){
if(arr[i]%2==0){
    sumE+=arr[i];
 }
}
return sumE;
}
int avg_even(int arr[],int size){
int sumE=0;
int c=0;
for(int i=0;i<size;i++){
    if(arr[i]%2==0){
    sumE+=arr[i];
c++;
    }
}
return sumE/c;
}
int avg_odd(int arr[],int size){
int sumO=0;
int c=0;
for(int i=0;i<size;i++){
    if(arr[i]%2!=0){
    sumO+=arr[i];
c++;
    }
}
return sumO/c;
}
int count_even(int arr[],int size){
int count=0;
for(int i=0;i<size;i++){
if(arr[i]%2==0){
    count++;
 }
}
return count;
}
int count_odd(int arr[],int size){
int count=0;
for(int i=0;i<size;i++){
if(arr[i]%2!=0){
    count++;
 }
}
return count;
}
int max_value(int arr[],int size){
int max=arr[0];
for(int i=0;i<size;i++){
    if(arr[i]>max){
    max=arr[i];
    }
}
return max;
}
int min_value(int arr[],int size){
int min=arr[0];
for(int i=0;i<size;i++){
    if(arr[i]<min){
    min=arr[i];
    }
}
return min;
}
int founded(int arr[],int size,int value){
for(int i=0;i<size;i++){
    if(arr[i]==value){
    return i;
    }
}
return -1;
}
int min_odd(int arr[],int size){
int min=arr[0];
for(int i=0;i<size;i++){
    if(arr[i]<min&&arr[i]%2!=0){
    min=arr[i];
    }
}
return min;
}
int max_even(int arr[],int size){
int max=arr[0];
for(int i=0;i<size;i++){
    if(arr[i]>max&&arr[i]%2==0){
    max=arr[i];
    }
}
return max;
}
bool prime_num(int n){
if (n<=1){
    return false;
}
for(int i=2;i<n;i++){
    if (n%i==0)
        return false;
}
return true;
}
int factorial(int num){
if(num<=1){
return 1;
}
return num*factorial(num-1);
}
void show_even(int arr[],int size){
for(int i=0;i<size;i++){
    if(arr[i]%2==0){
    cout<<"Even number: "<<arr[i]<<endl;
    }
}
}
void show_odd(int arr[],int size){
for(int i=0;i<size;i++){
    if(arr[i]%2!=0){
    cout<<"odd number: "<<arr[i]<<endl;
    }
}
}
int main()
{  while (true){
     int size;
    cout << "Hello user" << endl;
    cout<<endl;
    cout<<"Enter the size of array you want"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"The number inside this index "<<i<<" is:";
    cin>>arr[i];
    }
    cout<<endl;
    cout<<"The sum of odd numbers is= "<<sum_odd(arr,size)<<endl;
    cout<<"The sum of even numbers is= "<<sum_even(arr,size)<<endl;
    cout<<"The average of even numbers is= "<<avg_even(arr,size)<<endl;
    cout<<"The average of odd numbers is= "<<avg_odd(arr,size)<<endl;
    cout<<"The numbers of even numbers is= "<<count_even(arr,size)<<endl;
    cout<<"The numbers of odd numbers is= "<<count_odd(arr,size)<<endl;
    cout<<"The maximum number is= "<<max_value(arr,size)<<endl;
    cout<<"The minmum number is= "<<min_value(arr,size)<<endl;
    cout<<"The minmum odd's number is= "<<min_odd(arr,size)<<endl;
    cout<<"The maximum even's number is= "<<max_even(arr,size)<<endl;
      show_even(arr,size);
        show_odd(arr,size);
    int num;
    cout<<"Enter a number to check if it's prime or not"<<endl;
    cin>>num;
    if(prime_num(num)){
        cout<<num<<": It's a prime number"<<endl;
    }
    else{
        cout<<num<<": It's not a prime number"<<endl;
    }
    int value;
    cout<<"Enter a number to see if it's exist or not"<<endl;
    cin>>value;
    int index=founded(arr,size,value);
    if(index!=-1){
        cout<<"The number is founded in index "<<index;
    }
    else{
        cout<<"The number is not founded "<<index;
    }
    cout<<endl;
    int number;
    cout<<"Enter a positive number"<<endl;
    cin>>number;
    cout<<"The factorial of: "<<number<<" is= "<<factorial(number)<<endl;
     cout<<endl;
char choice;
cout<<"Do you want to try again"<<endl;
cin>>choice;
if(choice=='N'||choice=='n'){
    break;
  }
}
    return 0;
}
