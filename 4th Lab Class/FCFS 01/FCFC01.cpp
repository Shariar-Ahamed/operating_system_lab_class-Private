#include<stdio.h>

//FCFS
int main()
{
    int p[30],bt[30],wt[30],tat[30],n;
    float awt=0.0, atat=0.0;

    printf("Enter no of process: ");
    scanf("%d",&n);
    //Process
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    //Brust Time
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    //FCFS

    printf("Process \t Brust Time \t Waiting Time \t Turn Around Time \n");
    for(int i=0;i<=n-1;i++)
    {
        wt[i]=0;
        tat[i]=0;

        for(int j=0;j<i;j++)
        {
            wt[i]=wt[i]+bt[j];
        }
        tat[i]=wt[i]+bt[i];

        awt=awt+wt[i];
        atat=atat+tat[i];

        printf("%d \t\t %d\t\t %d \t\t %d \n",p[i],bt[i],wt[i],tat[i]);
    }

    awt = awt / n;
    atat = atat / n;

    printf("AWT  = %f \n",awt);
    printf("ATAT = %f \n",atat);



    return 0;
}
