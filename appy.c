#include<stdio.h>

int main()

{

    int testCase;

     long int a, b;

    long long int n, k, incrementer;

    scanf("%d", &testCase);


    while(testCase--)
    {
        long long int totalSolve=0;

       scanf("%lld %ld %ld %lld", &n, &a, &b, &k);


        for(incrementer=1; incrementer<=n; incrementer++)
        {
             if((incrementer%a==0)&&(incrementer%b==0))
                continue;


            if((incrementer%a==0)&&(incrementer%b!=0))
            {
               totalSolve++;
            }
            else if((incrementer%a!=0)&&(incrementer%b==0))
            {
                totalSolve++;
            }
        }

        if(totalSolve>=k)
        {
            printf("Win\n");
        }
        else
        {
            printf("Lose\n");
        }







    }


    return 0;

}
