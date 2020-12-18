//生成数据的模块
#include<cstdio>
#include<iostream>
#include "fio.h"
#include<string>
using namespace std;
int main()
{
	string path;
	freopen("..\\temp\\name.txt","r",stdin);
    getline(cin,path);
    fclose(stdin);//从name.txt文件里获取路径
    path.append("\\file.txt");
    freopen(path.c_str(),"r",stdin);
    string str;
    getline(cin,str);//逐行获取输入文件的内容
    do
    {
        if(str.substr(0,3)=="vec")
        {
            int t=0;
            int num=read(str,t);
            int l=read(str,t);
            int r=read(str,t);
            gen_vec(num,l,r);
        }
    }
    while(getline(std::cin,str));
    fclose(stdin);
    copy(path);
	return 0;
}
