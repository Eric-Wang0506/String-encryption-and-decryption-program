#include <bits/stdc++.h>
#include <windows.h>
#include <ctime>
#include <conio.h>
using namespace std;
int main() {
	while(1){
		cout<<"��ӭ�������ܽ��ܳ�������1���ܣ�����2���ܣ����������ַ��˳���"<<endl;
		char ch=getch();
		string st="",key="",ans="";
		int n;
		if(ch=='1'){
			system("cls");
			cout<<"��������Ҫ���ܵ��ַ���:"<<endl;
			getline(cin,st);
			for(int i=0;i<st.size();i++){
				n=rand()%9+0;
				key=key+char(n+48);
				ans=ans+char(st[i]+n);
			}	
			cout<<"���ģ�"<<ans<<endl<<"key��"<<key<<endl;
			system("pause");
		}
		else if(ch=='2'){
			cout<<"��������Ҫ���ܵ��ַ���:"<<endl;
			getline(cin,ans);
			cout<<"���������key:"<<endl;
			getline(cin,key);
			for(int i=0;i<ans.size();i++){
				st=st+char(ans[i]-key[i]+48);
			}	
			cout<<"���ģ�"<<st<<endl;
			system("pause");	
		}
		else return 0;
	}
	return 0;
}
