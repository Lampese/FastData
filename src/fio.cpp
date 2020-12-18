#include<cstdio>
#include<iostream>
#include<ctime>
#include<cstdlib>
#include "fio.h"
using namespace std;
int read(string str,int &beg)
{
    int s=0;
    bool w=0;
    char ch=str[beg++];
    while(ch<'0'||ch>'9'){
        if(ch=='-') w=1;
        ch=str[beg++];}
    while(ch>='0'&&ch<='9'){
        s=(s<<1)+(s<<3)+(ch^48);
        ch=str[beg++];}
    return w ? ~s+1 : s;
}
void gen_vec(int num,int l,int r)
{
    freopen("..\\temp\\dtmp.txt","w",stdout);
    srand(time(NULL));
    for(int i=1;i<=num;++i)
    {
        int t=rand()%(r-l+1)+l;
        printf("%d\n",t);
    }
    fclose(stdout);
    return;
}
void copy(string path)
{
    freopen("..\\temp\\dtmp.txt","r",stdin);
    path.append("\\out.txt");
    freopen(path.c_str(),"w",stdout);
    string str;
    while(getline(cin,str)) cout<<str<<endl;
    fclose(stdin);
    fclose(stdout);
    return;
}
