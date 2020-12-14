#include<cstdio>
#include<iostream>
#include "fio.h"
#include<string>
using namespace std;
void path_ana(string a)
{
    string path=a;
    path.append("\\file.txt");
    freopen(path.c_str(),"r",stdin);
    string str;
    getline(std::cin,str);
    do
    {
        if(str.substr(0,3)=="vec")
        {
            int t=0;
            int num=read(str,t);
            int l=read(str,t);
            int r=read(str,t);
            gen(a,1,num,l,r);
        }
    }
    while(getline(std::cin,str));
    fclose(stdin);
    return;
}
int main()
{
	string a;
	freopen("..\\temp\\name.txt","r",stdin);
    getline(cin,a);
    fclose(stdin);
    path_ana(a);
	return 0;
}
