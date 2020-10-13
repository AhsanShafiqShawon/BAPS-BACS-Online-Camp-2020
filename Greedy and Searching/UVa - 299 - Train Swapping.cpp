///Brute force idea
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int l;
        scanf("%d", &l);
        int arr[l];
        int cnt=0;
        int temp;
        for(int i=0; i<l; i++)
            scanf("%d", arr+i);
        for(int i=0; ; i++)
        {
            int token=0;
            for(int j=0; j<l-1; j++)
            {
                if(arr[j]>arr[j+1])
                {
                    cnt++;
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    token=1;
                }
            }
            if(token==0)    break;
        }
        printf("Optimal train swapping takes %d swaps.\n", cnt);
    }
    return 0;
}
