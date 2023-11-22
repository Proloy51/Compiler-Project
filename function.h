	#include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    extern int yylineno;

    // Prime number function

    void checkforprime(int n){
    int flag=0;
    if(n < 2)
    {
        printf("%d is not prime number\n",n);
    }
    else if(n == 2){
        printf("%d is a prime number\n",n);
    }
    else{
        for(int i=2; i<=n-1; i++)
        {
            if(n % i == 0)
            {
                flag=1;
                break;
            }
        }
        if(flag == 1)
        {
            printf("%d is not prime number\n",n);
        }
        else{
            printf("%d is prime number\n",n);
        }
    }
}



// Power function

int powerfun(int n1,int n2)
{
    int num=n2;
	int ans=1;
	while(n2)
	{
	  ans*=n1;
	  n2--;
	}
	return ans;
}


// GCD function

void gcdfun(int n1,int n2)
{
    int num1=n1;
	int num2=n2;
	while(n1!=n2)
	{
		if(n1 > n2)
			n1 -= n2;
		else
			n2 -= n1;
	}
	printf("GCD of %d and %d : %d\n",num1,num2,n1);
}


// LCM function

void lcmfun(int n1,int n2)
{
    int num1=n1;
    int num2=n2;
    int a=n1*n2;
	while(n1!=n2)
	{
		if(n1 > n2)
		  n1 -= n2;
		else
		  n2 -= n1;
	}
	n1=a/n1;
	printf("LCM of %d and %d : %d\n",num1,num2,n1);
}

// findmax function

void findmax(int n1,int n2)
{
    int ans;
    if(n1>n2) 
	  ans=n1;
	else 
	  ans=n2;
	printf("Maximum number between %d and %d : %d\n",n1,n2,ans);
}


// findmin function

void findmin(int n1,int n2)
{
    int ans;
    if(n2>n1) 
	  ans=n1;
	else 
	  ans=n2;
	printf("Minimum number between %d and %d : %d\n",n1,n2,ans);
}


// Divide function

void dividefun(int n1,int n2)
{
    int ans;
    if(n2) {
 	  ans = n1 / n2;
	}
	else {
		ans = 0;
		printf("\nError:\nLine no: %d   division by zero\n",yylineno);
		exit(-1);
	} 
}


// MOD function

void modfun(int n1,int n2)
{
    int ans;
    if(n2) {
 	  ans = n1 % n2;
	}
	else {
		ans = 0;
		printf("\nError:\nLine no: %d   division by zero\n",yylineno);
		exit(-1);
	} 
    printf("Modulus of %d and %d : %d\n",n1,n2,ans);
}

// Factorial function

void factorial(int n)
{
    int ans=1,i;
	for(i=n;i>1;i--){
	  ans= ans * i;}
	printf("Factorial of %d : %d\n",n,ans);
}


// oddeven function

void checkforoddeven(int num)
{
    int n=abs(num);
	if (n%2==0)	{	
		printf("even\n");}
	else { printf("odd\n"); }
}

// sum of digits function

void sumofdigits(int num)
{
    int s=0, n=num, m;
	while(n>0){    
	m=n%10;    
	s+=m;    
	n/=10;    
	}    
	printf("Sum of digits of the number %d : %d\n",num,s);
}

// reverse number function

void reversenumber(int num)
{
    int n=num, reverse=0, rem; 
	while(n!=0){    
	rem=n%10;    
	reverse=reverse*10+rem;    
	n/=10;    
	}     
	printf("Reverse of %d : %d\n",num,reverse);
}

// reverse string function

void reversestr(char *s)
{
int l = strlen(s);
int i;
for(i = l-2;  i >0; i--) 
printf("%c",s[i]);
}