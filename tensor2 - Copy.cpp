#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<utility>
#include<string>
#include<cstring>
#include<string.h>

using namespace std;

int main()
{
    freopen("tensor.txt","r", stdin);
    int T;
    cin>>T;
    while(T>0)
    {
        int ca, ra, cb, rb;
        int i,j,k,l,x,y,p,q,m,n;
        cin>>ra>>ca>>rb>>cb;
        //i=j=k=l=x=y=p=q=m=n=0;
        int sz = ra*rb*ca*cb;
        int fr = ra*rb;
    	int fc = ca*cb;

        int A[ra][ca], B[rb][cb];
        int C[ra*rb][ca*cb];

        int f[sz];
        int f2[ra*rb][ca*cb];


        for(i=0; i<ra; i++)
        {
            for(j=0; j<ca; j++)
            {
                cin>>A[i][j];
            }
        }

        for(i=0; i<ra; i++)
        {
            for(j=0; j<ca; j++)
            {
                cin>>B[i][j];
            }
        }

        i=0;
        j=0;
        k=0;
        l=0;
        x=0;
        for(i=0; i<ra; i++)
        {
            for(k=0; k<rb; k++)
            {
                for(j=0; j<ca; j++)
                {
                    for(l=0; l<cb; l++)
                    {

                        C[i+l+1][j+k+1] = A[i][j]*B[k][l];
                        //printf("%d\t",C[i+l+1][j+k+1]);
                        f[x]=A[i][j]*B[k][l];
                        x++;

                    }
                }
                printf("\n");
            }
        }
        cout<<endl;
        //printf("debug : %d %d %d %d \n\n\n", C[0][0], C[1][1], C[2][2], C[3][3]);
        for(int y=0; y<x; y++)
            cout<<f[y]<<"  ";

        cout<<endl<<endl;

        memcpy( f2[0], f, sz * sizeof(int) ) ;

        for(i=0; i<fr; i++)
        {
            for(j=0; j<fc; j++)
            {
                printf("%d ",f2[i][j]) ;
            }
            printf("\n");
        }
        T--;
    }



    return 0;
}
