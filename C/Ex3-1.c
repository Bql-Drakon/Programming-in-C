#include<stdio.h>
#include<math.h>
int main()
{
    long int sum=0,i,rem,dig=0,num,ans, N, c;

    printf("Digite um valor maior que 1, a fim de verificar quais numeros sao de Dudeney:\n");

    scanf("%d",&N);
    
    printf("A soma dos algarismos do Numero de Dudeney:\n");

    for(i=0;i<N;i++)

    {

    num=pow(i,3);

    ans=num;

    while(num>0)
    {

        rem=num%10;

        num=num/10;

        sum=sum+rem;

    }

    if(i==sum)

    {
        
        printf("%ld\n",sum);

    }

    sum=0;

    dig=0;

    }

    printf("Os Numeros de Dudeney sao (respectivamente):\n");

    for(i=0;i<N;i++)

    {

    num=pow(i,3);

    ans=num;

    while(num>0)
    {

        rem=num%10;

        num=num/10;

        sum=sum+rem;

    }

    if(i==sum)

    {
        
        printf("%ld\n",ans);

    }

    sum=0;

    dig=0;

    }

    printf("Os numeros de Dudeney que sao impares:\n");

    for(i=0;i<N;i++)

    {

    num=pow(i,3);

    ans=num;

    while(num>0)
    {

        rem=num%10;

        num=num/10;

        sum=sum+rem;

    }
    
    if(i==sum)

    {
        
       if(ans % 2 == 0)
       
       printf("");
   
    else
        
        printf("%d\n", ans);
  
    }

    sum=0;

    dig=0;

    }

    printf("Os numeros de Dudeney que sao primos:\n");

    for(i=0;i<N;i++)

    {

    num=pow(i,3);

    ans=num;

    while(num>0)
    {

        rem=num%10;

        num=num/10;

        sum=sum+rem;

    }
    
    if(i==sum)

    {
        
        for (c = 2; c <= ans/2; c++)

        {
        
        if (c == ans/2 + 1)
        
        {
           
            printf("%d\n", ans);

        }

        }

    }

    sum=0;

    dig=0;

    }

}