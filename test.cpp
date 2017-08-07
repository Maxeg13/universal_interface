#include <stdio.h>
#include <vector>
#include <iostream>

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

        for(int i=0;i<f.size();i++)
        std::cout<<f[i]<<std::endl;

//        while(1)
//        {

//            f.push_back(3);
//            scanf("%f",&f[cnt-1]);


//            cnt++;

//    //        printf("%d\n",cnt);
//        }

}
