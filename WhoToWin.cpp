/*** 
 * @Author       : FeiYehua
 * @Date         : 2024-10-13 23:03:25
 * @LastEditTime : 2024-10-14 11:29:45
 * @LastEditors  : FeiYehua
 * @Description  : 
 * @FilePath     : WhoToWin.cpp
 * @     © 2024 FeiYehua
 */
#include<iostream>
using namespace std;
#if 0
struct PowerInfo
{
    int numberOfPower;
    int previous,next;
};
class schoolInfo
{
    public: 
        struct PowerInfo powerInfo[101];
        int max;
        void getPreviousAndNext()
        {
            int i=100;
            while(powerInfo[i].numberOfPower==0)
            {
                i--;
            }
            max=i;
            int next=i;
            i--;
            for(;i>=1;i--)
            {
                if(powerInfo[i].numberOfPower!=0)
                {
                    powerInfo[i].next=next;
                    powerInfo[next].previous=i;
                    next=i;
                }
            }
        }
        void updatePreviousAndNext(int power)
        {
            powerInfo[powerInfo[power].next].previous=powerInfo[power].previous;
            powerInfo[powerInfo[power].previous].next=powerInfo[power].next;
        }
};
int getMaxNumberOfLose()
{
    int count=0;
    for()
}
class schoolInfo HUST,WHU;
int n,k;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int power=0;
        cin>>power;
        WHU.powerInfo[power].numberOfPower++;
    }
    for(int i=1;i<=n;i++)
    {
        int power=0;
        cin>>power;
        HUST.powerInfo[power].numberOfPower++;
    }
    HUST.getPreviousAndNext();
    WHU.getPreviousAndNext();
}
#endif

int WHU[105],HUST[105];
int WHU1[105],HUST1[105];
int n,k;
int getHUSTMaxNumberOfLose()
{
    int count=0;
    int j=0;
    for(int i=1;i<=100;i++)
    {
        while(HUST[i]!=0)
        {
            j=max(i+1,j);
            while(WHU[j]==0)
            {
                j++;
                if(j>=101)
                {
                    return count;
                }
            }
            WHU[j]--;
            count++;
            HUST[i]--;
        }
    }
    return count;
}
int getWHUMaxNumberOfLose()
{
    int count=0;
    int j=0;
    for(int i=1;i<=100;i++)
    {
        while(WHU1[i]!=0)
        {
            j=max(i+1,j);
            while(HUST1[j]==0)
            {
                j++;
                if(j>=101)
                {
                    return count;
                }
            }
            HUST1[j]--;
            count++;
            WHU1[i]--;
        }
    }
    return count;
}
int main(int argc,char *argv[])
{
    freopen(argv[1],"r",stdin);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int power=0;
        cin>>power;
        WHU[power]++;
    }
    for(int i=1;i<=n;i++)
    {
        int power=0;
        cin>>power;
        HUST[power]++;
    }
    copy(HUST,HUST+104,HUST1);
    copy(WHU,WHU+104,WHU1);
    cin>>k;
    if(getHUSTMaxNumberOfLose()<k)
    {
        cout<<"Normal";
    }
    else
    {
        if(k<n-k&&getWHUMaxNumberOfLose()>n/2)
        {
            cout<<"HUST!";
        }
        else
        {
            cout<<"WHU!";
        }
    }
    return 0;
}