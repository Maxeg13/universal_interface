#include <stdio.h>
#include <vector>
#include <iostream>

void printV(std::vector<float> x)
{
    for(int i=0;i<x.size();i++)
        std::cout<< x[i]<< " ";
    std::cout<<std::endl;
}

int main( void ) {


    std::string s;
    char c;
    std::vector<float> f;

    int cnt=1;



    while(1)
    {
        f.push_back(3);
        scanf("%f",&f[cnt-1]);

        scanf("%c",&c);
        if(c=='\n')break;

        if(c==' ')
            cnt++;

        //        printf("%d\n",cnt);
    }
    f.resize(cnt);

    printV(f);

    while(1)
    {
        if(scanf("%f",&f[0])==-1)break;
        for(int i=1;i<cnt;i++)
            scanf("%f",&f[i]);

        printV(f);
    }

}
