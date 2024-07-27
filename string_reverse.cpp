#include<iostream>
#include<string>
using namespace std;
int main()
{
    string st;
    cout<<"input a string"<<endl;
    cin>>st;
    for(int i =0, j =st.size()-1; i<j; i++,j--)
    {
        char s =st[i];
        st[i] = st[j];
        st[j] = s;
    }
    cout<<st;
}
