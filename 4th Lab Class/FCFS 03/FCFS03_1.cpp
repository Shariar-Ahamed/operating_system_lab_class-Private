#include<stdio.h>

//FCFS
int main()
{
    int p[30],at[30],bt[30],wt[30],tat[30],n;
    float awt=0.0, atat=0.0;

    printf("Enter no of process: ");
    scanf("%d",&n);
    //Process
    printf("Process: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
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
    for(int i=0;i<=n-1;i++)
    {
        wt[i]=0;
        tat[i]=0;

        for(int j=0;j<i;j++)
        {
            wt[i]=wt[i]+bt[j];
        }
        wt[i]=wt[i]-at[i];
        tat[i]=wt[i]+bt[i];

        awt=awt+wt[i];
        atat=atat+tat[i];

        printf("%d \t\t %d\t\t %d\t\t %d \t\t %d \n",p[i],at[i],bt[i],wt[i],tat[i]);
    }

    awt = awt / n;
    atat = atat / n;

    printf("AWT  = %f \n",awt);
    printf("ATAT = %f \n",atat);



    return 0;
}

