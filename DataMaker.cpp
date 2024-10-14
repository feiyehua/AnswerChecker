/*** 
 * @Author       : FeiYehua
 * @Date         : 2024-10-14 10:07:58
 * @LastEditTime : 2024-10-14 10:14:27
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : DataMaker.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
bool used[105];
int main(int argc,char *argv[])
{
    freopen(argv[1],"w",stdout);
    srand(time(NULL));
    int n=rand()%10+1;
    cout<<n<<endl;
    for(int i=1;i<=n;i++)
    {
        int tmp=rand()%100+1;
        while(used[tmp])
        {
            tmp=rand()%100+1;
        }
        used[tmp]=1;
        cout<<tmp<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        int tmp=rand()%100+1;
        while(used[tmp])
        {
            tmp=rand()%100+1;
        }
        used[tmp]=1;
        cout<<tmp<<" ";
    }
    cout<<endl<<rand()%n;
    return 0;
}