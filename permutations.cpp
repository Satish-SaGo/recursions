#include<iostream>
using namespace std;
void permutations(string a, int l, int r) 
{ 
    if (l == r) 
        //return  a;
         cout<<a<<endl;
           for (int i = l; i <= r; i++) 

          { 
            swap(a[l], a[i]);
            permutations(a, l+1, r);
            swap(a[l], a[i]);
           } 
} 

int main() 
{ 
    int n;
    cout<<"enter no elements:";
    cin>>n;
    string str ;
    cout<<"enter sring";
    cin>>str;
    permutations(str, 0, n-1); 

    return 0; 
}
