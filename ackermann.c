  #include<stdio.h>
     int ack(int,int); 
     int main()
     {
        int m,n,ans;
        printf("enter two whole numbers:\n");
        scanf("%d%d",&m,&n);
        ans=ack(m,n);
        printf("Ackermann of %d and %d is %d",m,n,ans);
        return 0;
        

     }

     int ack(int m,int n)
     {
        if(m==0)
        return n+1;
        else if(m>0 && n==0)
        return ack(m-1,1);
        else if(m>0 && n>0)
        return ack(m-1,ack(m,n-1));

     }