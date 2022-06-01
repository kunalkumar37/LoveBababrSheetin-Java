
#include <bits/stdc++.h>
using namespace std;

string printStrongNess(string input)
{
	int n = input.length();

	// Checking lower alphabet in string
	bool hasLower = false, hasUpper = false;
	bool hasDigit = false, specialChar = false;
	string normalChars = "abcdefghijklmnopqrstu"
		"vwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";

	for (int i = 0; i < n; i++) {
		if (islower(input[i]))
			hasLower = true;
		if (isupper(input[i]))
			hasUpper = true;
		if (isdigit(input[i]))
			hasDigit = true;

		size_t special = input.find_first_not_of(normalChars);
		if (special != string::npos)
			specialChar = true;
	}

	
	
	if (hasLower && hasUpper && hasDigit &&
		specialChar && (n >= 7)){
            return input;
        }
		

	else{
        if(hasLower==false){
            input.push_back('a');
        }
        if(hasUpper==false){
            input.push_back('K');

        }
        if(hasDigit==false){
            input.push_back('1');

        }
        if(specialChar==false){
            input.push_back('@');
        }
    }
    if(input.length()<7){
        
       int d=input.length();
       
       
       for(int i=0;i<7-d;i++){
          input.push_back('1');
       }
    }
    return input;

}

// Driver code
int main()
{
	int t;
    cin>>t;
    for(int i=1;i<=t;i++){
         int n;
    cin>>n;
  string s;
  cin>>s;
    string ans;
    ans=printStrongNess(s);
  cout<<"Case #"<<i<<": "<<ans<<endl;
    }
	
	return 0;
}
