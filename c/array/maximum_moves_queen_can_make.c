#include<stdio.h>

int obstacles(int x,int y,int k,int obs[])
{
    for(int i=0;i<k*2;i+=2)
    {
        if(x==obs[i] && y == obs[i+1])
        {
            return 0;
        }
    }

    return 1;
}

int range(int n,int x,int y)
{
    if(x>0 && x<=n && y>0 && y<=n)
    {
        return 1;
    }

    return 0;
}


int moves(int n,int x,int y,int posx,int posy,int k,int obs[])
{
    int cnt = 0;

    while(range(n,x,y) && obstacles(x,y,k,obs))
    {
        x += posx;
        y += posy;
        cnt++;
    }
    return cnt-1;
}

int cells(int n,int x,int y,int k,int obs[])
{
    int ans = 0;

    ans += moves(n,x,y,0,-1,k,obs);
    ans += moves(n,x,y,1,-1,k,obs);
    ans += moves(n,x,y,1,0,k,obs);
    ans += moves(n,x,y,1,1,k,obs);
    ans += moves(n,x,y,0,1,k,obs);
    ans += moves(n,x,y,-1,1,k,obs);
    ans += moves(n,x,y,-1,0,k,obs);
    ans += moves(n,x,y,-1,-1,k,obs);

    return ans;
}

int main()
{
    int n;
    
    int x;
    int y;

    int k;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter the x pos of queen: ");
    scanf("%d",&x);

    printf("Enter the y pos of queen: ");
    scanf("%d",&y);

    printf("Enter the number of obstacles: ");
    scanf("%d",&k);

    int obs[k];

    for(int i=0;i<k*2;i++)
    {
        if(i%2)
        {
            printf("Enter the y%d position obstacle: ",(i/2)+1);
            scanf("%d",&obs[i]);
        }
        else
        {
            printf("Enter the x%d position obstacle: ",(i/2)+1);
            scanf("%d",&obs[i]);
        }
    }

    printf("Output: %d",cells(n,x,y,k,obs));

    return 0;

}