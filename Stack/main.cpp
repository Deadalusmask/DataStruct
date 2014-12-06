#include <iostream>
#include "stack.h"
using namespace std;
stack st = stack();

int g(int m ,int n){
    if (n<0 || m<0)  return -1;
    cout<<"Enter G("<<m<<","<<n<<")"<< endl;
    st.push(m,n);st.print();
    if (m==0 && n>=0) {
        cout<<"Exit G("<<m<<","<<n<<")"<< endl;
        st.pop();st.print();
        return 0;
    } else{
        int result =  g(m-1,2*n) +n;
        cout<<"Exit G("<<m<<","<<n<<")"<< endl;
        st.pop(); st.print();
        return result;
    }
}


int main() {
    int result = g(7,14);
    cout<<"The g(7,14) 's result: "<<result<< endl;
    return 0;
}