#include <bits/stdc++.h>
#include <windows.h>
#include <ctime>
#include <conio.h>
using namespace std;
int main() {
	while(1){
		cout<<"Welcome to the encryption and decryption program, enter 1 encryption, enter 2 decryption, enter other characters to exit."<<endl;
		char ch=getch();
		string st="",key="",ans="";
		int n;
		if(ch=='1'){
			system("cls");
			cout<<"Please enter the string you want to encrypt:"<<endl;
			getline(cin,st);
			for(int i=0;i<st.size();i++){
				n=rand()%9+0;
				key=key+char(n+48);
				ans=ans+char(st[i]+n);
			}	
			cout<<"Ciphertext:"<<ans<<endl<<"Key:"<<key<<endl;
			system("pause");
		}
		else if(ch=='2'){
			cout<<"Please enter the string you want to decrypt:"<<endl;
			getline(cin,ans);
			cout<<"Please enter decryption key:"<<endl;
			getline(cin,key);
			for(int i=0;i<ans.size();i++){
				st=st+char(ans[i]-key[i]+48);
			}	
			cout<<"Plaintext:"<<st<<endl;
			system("pause");	
		}
		else return 0;
	}
	return 0;
}
