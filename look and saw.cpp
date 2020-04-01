#include<iostream>
#include<string>
using namespace std;
int main() {
	    int n;
	    cout<<"enter n value";
	    cin >> n;
	    if(n==1)cout << 1 ;
	    else if(n==2)cout << 11;
	    else{
	        string s ="11";
	        for(int j=3;j<=n;j++)
			{
	            int count = 1;
	            string s1="";
	            for(int i=1;i<s.length()+1;i++){
	                if(s[i]!=s[i-1]){
	                    s1 = s1 + (char)(count+48);
	                    s1 = s1 + s[i-1];
	                    count = 1; 
	                }else
	                    count++;
	            }
	            s = s1;
	        }
	          cout<<"the ";
	          cout<<n;
	          cout<<"th row of pattern is:";
	          
	            	        cout << s ;
	    }

	return 0;
}
