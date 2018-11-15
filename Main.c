#include <stdio.h>
#include <windows.h>
#define num 3   
int main()
{
  
   int turn=0; 
  int x,y,z,temp1,temp2; 
printf("Plese Enter %i Numbers (only numbers) \n", num);
scanf("%i",&x);
scanf("%i",&y);
scanf("%i",&z);

if((x+y==z)||(x+z==y)||(z+y==x)||(x==1&&y==1&&z==1))
{
    turn=1;
}
while((!(x==0&&y==0&&z==1))&&(!(x==0&&y==1&&z==0))&&(!(x==1&&y==0&&z==0)))
{
printf("packet sizes are \n");
printf("%i ",x);
printf("%i ",y);
printf("%i ",z);
printf("\n");

if(turn==1)
{
    printf("\n Your Turn \n please state how much to take? \n");
scanf("%i",&temp1);
printf(" to ");
scanf("%i",&temp2);

if(temp1!=x&&temp1!=y&&temp1!=z||(temp2>=temp1)){
    printf(" Wrong Num \n");  }
else if(temp1==x){
    x=temp2;
    turn=0;}
else if(temp1==y){
    y=temp2;
    turn=0;}
else if(temp1==z){
    z=temp2;
    turn=0;}
}

 else if (turn==0){ 
    if((x==0&&y==0)||(x==0&&z==0)||(y==0&&z==0))
    {
        if(x!=0)
        {
            printf("I turned %i \n",x );
           x = 1; 
        }
        if(y!=0)
        {
            printf("I turned %i",y );
           y = 1;  
        }
        if(z!=0)
        {
            printf("I turned % \ni",z );
           z = 1; 
        }
        printf(" to %i" , 1 );
    }
    else if((x==0||y==0||z==0)&&(x==1||y==1||z==1))
    {
        if(x!=0&&x!=1)
        {   
            printf("I turned %i",x );
            x=0; 
        }
        else if(y!=0&&y!=1)
        {
            printf("I turned %i",y );
            y=0;   
        }
        else if(z!=0&&z!=1)
        {
            printf("I turned %i",z );
            z=0;  
        }
        else if(x==1)
        {
            printf("I turned %i",x );
            x=0; 
        }
        else if (y==1)
        {
            printf("I turned %i",y );
            y=0; 
        }
        printf(" to %i \n" , 0 );
    } 
    else if((x==1&&y==1)||(x==1&&z==1)||(y==1&&z==1))
    {
        if(x!=1)
        {
            printf("I turned %i",x );
            x= 1;
        }
        if(y!=1)
        {
            printf("I turned %i",y );
            y= 1; 
        }
        if(z!=1)
        {
            printf("I turned %i",z );
            z= 1;   
        }
        printf(" to %i \n" , 1 );
    }
     else if((x==y||x>y)&&(x>z||x==z))
    {
     printf("I turned %i",x );
     printf(" to %i \n" , abs (y-z) );
     x= abs (y-z);
    }
    else if((y==z||y>z)&&(y>x||y==x))
    {
        printf("I turned %i",y );
        printf(" to %i \n" , abs (x-z) );
        y= abs(x-z);
    }
    else if(z==y||z>y&&z==x||z>x)
    {
        printf("I turned %i",z );
        printf(" to %i \n", abs (x-y) );
        z=abs (x-y); 
    }
    turn=1;
}
}
printf("packet sizes are \n");
printf("%i ",x);
printf("%i ",y);
printf("%i ",z);
printf("\n");
printf(" \n Game Over - You Lost !! " );
return 0;
system("pause");

}


