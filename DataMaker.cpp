/*** 
 * @Author       : FeiYehua
 * @Date         : 2024-10-14 10:07:58
 * @LastEditTime : 2024-10-14 11:17:22
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : DataMaker.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
#include<cstring>
using namespace std;
bool used[105];
void makeData(int i)
{
    memset(used,0,sizeof(used));
    string fileNameAndPath="../Data/";
    fileNameAndPath=fileNameAndPath+to_string(i)+".in";
    freopen(fileNameAndPath.c_str(),"w",stdout);
    srand(time(NULL)+rand());
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
    cout<<endl<<(rand()%(n-1))+1;
}
int main(int argc,char *argv[])
{
    system("mkdir ../Data");
    for(int i=1;i<=100;i++)
    {
        makeData(i);
    }
    return 0;
}