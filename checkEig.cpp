#include "pca.h"
#include <vector>
//#include <iostream>
#include <stdio.h>
#include "myReadStream.h"

//#include <Eigen/Eigenvalues>
//#include <Eigen/Dense>
//using namespace Eigen;


using namespace std;
//typedef std::complex<double> cd;
vector<vector<float> > f, fa;
int width=2;
 PCA myPCA(400,2);


int main(void)
{


myReadStream(2,f);
for(int i=0;i<f.size()-1;i++)
myPCA.updateBuf(f[i]);
//printf("strange size: %d\n",f[0].size());
//printf(" %4.2f\n",f[0][1]);
//     while(1)
//     {
//         if(scanf("%f",&cc[0])==-1)break;
//         for(int i=1;i<2;i++)
//             scanf("%f",&cc[i]);

// //        printV(f);
//     }
// //    std::cout<<'\n';


     //    printV(f);


    myPCA.centr();
    myPCA.getCor();
    myPCA.algorithm();
//    myPCA.sort();
    //myPCA.proect(v);


    //    MatrixXd MH = MatrixXd::Zero(8,3);
    //    MatrixXd M=MH.transpose()*MH;
    //    cout  << endl << MH << endl << endl;
    //    cout  << endl << norm(MH) << endl << endl;
    //     cout  << endl << norm(MH).mean();
    // cout << endl <<  (M.middleCols<1>(1).max())<< endl << endl;
    //eig();


    //    Matrix3f m = Matrix3f::Random();
    //    int i,j;
    //     float minOfM = m.middleCols<1>(1).maxCoef(&i,&j);
    //     cout << "Here is the matrix m:\n" << m << endl;
    //     cout << "Its minimum coeficient (" << minOfM
    //          << ") is at position (" << i << "," << j << ")\n\n";


}
