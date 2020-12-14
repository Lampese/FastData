#include<cstdio>
#include<iostream>
//#include "fio.h"
#include<cstring>
#include<string>
int main()
{
    std::string name;
    std::cin>>name;
    freopen("..\\temp\\name.txt","w",stdout);
    std::cout<<name<<std::endl;
    fclose(stdout);
    system("..\\bin\\gen.exe");
    return 0;
}
