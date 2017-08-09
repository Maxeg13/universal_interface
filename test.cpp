#include <stdio.h>
#include <vector>
#include <iostream>
#include <Eigen/Dense>
using namespace Eigen;



void printV(std::vector<float> x)
{
    for(int i=0;i<x.size();i++)
        printf("%4.2f",x[i]);

printf("\n");
}

int main( void ) {

    std::vector<float> f;
    int cnt=2;

//    while(1)
//    {
//        f.push_back(3);
//        scanf("%f",&f[cnt-1]);

//        scanf("%c",&c);
//        if(c=='\n')break;

//        if(c==' ')
//            cnt++;

//        //        printf("%d\n",cnt);
//    }
    f.resize(cnt);

//    printV(f);

    while(1)
    {
        if(scanf("%f",&f[0])==-1)break;
        for(int i=1;i<cnt;i++)
            scanf("%f",&f[i]);

        printV(f);
    }
    std::cout<<'\n';


    MatrixXd M(4,2);
    M <<1.2,2,3.4,4.55,5,6,7,8;
    std::cout<< M<<std::endl;

}
