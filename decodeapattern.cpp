#include<iostream>
#include<string>
using namespace std;
int main() {
	    int n;
	    cin >> n;
	    if(n==1)cout << 1 << endl;
	    else if(n==2)cout << 11 << endl;
	    else{
	        string s ="11";
	        for(int j=3;j<=n;j++)
			{
	            int count = 1;
	            string s1="";
	            for(int i=1;i<s.length();i++){
	                if(s[i]!=s[i-1]){
	                    s1 = s1 + (char)(count+48);
	                    s1 = s1 + s[i-1];
	                    count = 1; 
	                }else
	                    count++;
	            }
	            s1 += count + '0';
	            s1 += s[s.length()-1];
	            s = s1;

	        }
	            	        cout << s << endl;
	    }
	
	return 0;
}
