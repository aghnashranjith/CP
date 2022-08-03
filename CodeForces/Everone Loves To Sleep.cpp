#include <bits/stdc++.h>
using namespace std;

struct Time
{
    int h, m;
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, H, M;
    
        cin>>n>>H>>M;

        Time alarms[n];
        int flag=0;
            Time sleepTime;


        for(int i=0; i<n; i++)
        {
            cin>>alarms[i].h>>alarms[i].m;
            if(alarms[i].h==H && alarms[i].m==M)
            {
                flag = 1;
            }
        }
        if(flag==1)
        {
            cout<<"0 0"<<endl;
            continue;
        }
        else
        {
            sleepTime.h = 50;
            sleepTime.m = 80;
            for(int i=0; i<n; ++i)
            {
                if(alarms[i].h>H)
                {
                    int sleepTime_for_alarm = (alarms[i].h-H)*60 + alarms[i].m- M;
                        if(sleepTime_for_alarm < sleepTime.h*60 +sleepTime.m)
                        {
                            sleepTime.h = sleepTime_for_alarm/60;
                            sleepTime.m = sleepTime_for_alarm%60;
                        }
                }

                else if(alarms[i].h==H){
                        if(alarms[i].m>M)
                        {
                            int sleepTime_for_alarm = (alarms[i].h-H)*60 + alarms[i].m- M;
                            if(sleepTime_for_alarm < sleepTime.h*60 +sleepTime.m)
                            {
                                sleepTime.h = sleepTime_for_alarm/60;
                                sleepTime.m = sleepTime_for_alarm%60;
                            }
                        }}
                else if(alarms[i].h<=H)
                {
                    int sleepTime_for_alarm = (24+alarms[i].h-H)*60 + alarms[i].m- M;
                    if(sleepTime_for_alarm < sleepTime.h*60 +sleepTime.m)
                    {
                        sleepTime.h = sleepTime_for_alarm/60;
                        sleepTime.m = sleepTime_for_alarm%60;
                    }
                }    
            }
        }

        cout<<sleepTime.h<<" "<<sleepTime.m<<endl;
    }
}