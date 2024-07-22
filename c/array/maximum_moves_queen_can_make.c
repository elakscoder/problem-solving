#include<stdio.h>

int range(int n,int x,int y)
{
    if(x>0 && x<=n && y>0 && y<=n)
    {
        return 1;
    }

    return 0;
}


int moves(int n,int x,int y,int posx,int posy,int k,int kx,int ky)
{
    int cnt = 0;

    while(range(n,x,y) && !(x == kx && y == ky))
    {
        x += posx;
        y += posy;
        cnt++;
    }
    printf("count: %d\n",cnt);
    return cnt-1;
}

int cells(int n,int x,int y,int k,int kx,int ky)
{
    int ans = 0;

    ans += moves(n,x,y,0,-1,k,kx,ky);
    printf("%d ",ans);
    ans += moves(n,x,y,1,-1,k,kx,ky);
    printf("%d ",ans);
    ans += moves(n,x,y,1,0,k,kx,ky);
    printf("%d ",ans);
    ans += moves(n,x,y,1,1,k,kx,ky);
    printf("%d ",ans);
    ans += moves(n,x,y,0,1,k,kx,ky);
    printf("%d ",ans);
    ans += moves(n,x,y,-1,1,k,kx,ky);
    printf("%d ",ans);
    ans += moves(n,x,y,-1,0,k,kx,ky);
    printf("%d ",ans);
    ans += moves(n,x,y,-1,-1,k,kx,ky);
    printf("%d ",ans);

    return ans;
}

int main()
{
    int n;
    
    int x;
    int y;

    int k;

    /* int kx;
    int ky; */

    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter the x pos of queen: ");
    scanf("%d",&x);

    printf("Enter the y pos of queen: ");
    scanf("%d",&y);

    printf("Enter the number of obstacles: ");
    scanf("%d",&k);

    for(int i=0;i<k;i++)
    {
        
    }
    /* printf("Enter kx: ");
    scanf("%d",&kx);

    printf("Enter ky: ");
    scanf("%d",&ky); */

    printf("Output: %d",cells(n,x,y,k,kx,ky));

    return 0;

}