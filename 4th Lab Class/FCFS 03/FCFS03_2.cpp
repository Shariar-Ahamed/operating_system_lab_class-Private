#include<stdio.h>

//FCFS
int main()
{
    int p[30],at[30],bt[30],wt[30],tat[30],f[30],n;
    float awt=0.0, atat=0.0;

    printf("Enter no of process: ");
    scanf("%d",&n);
    //Process
    printf("Process: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        f[i]=0;
    }

    //Arrival Time
    printf("Arrival Time: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&at[i]);
    }

    //Brust Time
    printf("Brust Time: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    //FCFS

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(bt[j]>bt[j+1])
            {
                //swap(at[j],a[j+1]);
                int t = at[j];
                at[j]=at[j+1];
                at[j+1]=t;

                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;


                t=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=t;

            }
        }
    }




    printf("Process \t Arrival Time \t Brust Time \t Waiting Time \t Turn Around Time \n");
    int count=0, time=0;

    while(count<n)
    {
        int flag = 1;
        for(int i=0;i<n;i++)
        {
            if(f[i]==0)
            {
                if(at[i]<=time)
                {
                    flag = 0;
                    wt[i]=time-at[i];
                    tat[i]=wt[i]+bt[i];
                    printf("%d \t\t %d\t\t %d\t\t %d \t\t %d \n",p[i],at[i],bt[i],wt[i],tat[i]);
                    count+=1;
                    time+=bt[i];
                    f[i]=1;
                    awt+=wt[i];
                    atat+=tat[i];
                }
            }
            if(count==n)
            {
                break;
            }

        }
        if(flag==1)
        {
            time+=1;
        }
    }




    awt = awt / n;
    atat = atat / n;

    printf("AWT  = %f \n",awt);
    printf("ATAT = %f \n",atat);



    return 0;
}
