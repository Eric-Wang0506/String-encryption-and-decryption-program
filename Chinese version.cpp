#include <bits/stdc++.h>
#include <windows.h>
#include <ctime>
#include <conio.h>
using namespace std;
int main() {
	while(1){
		cout<<"欢迎来到加密解密程序，输入1加密，输入2解密，输入其他字符退出。"<<endl;
		char ch=getch();
		string st="",key="",ans="";
		int n;
		if(ch=='1'){
			system("cls");
			cout<<"请输入你要加密的字符串:"<<endl;
			getline(cin,st);
			for(int i=0;i<st.size();i++){
				n=rand()%9+0;
				key=key+char(n+48);
				ans=ans+char(st[i]+n);
			}	
			cout<<"密文："<<ans<<endl<<"key："<<key<<endl;
			system("pause");
		}
		else if(ch=='2'){
			cout<<"请输入你要解密的字符串:"<<endl;
			getline(cin,ans);
			cout<<"请输入解密key:"<<endl;
			getline(cin,key);
			for(int i=0;i<ans.size();i++){
				st=st+char(ans[i]-key[i]+48);
			}	
			cout<<"明文："<<st<<endl;
			system("pause");	
		}
		else return 0;
	}
	return 0;
}
