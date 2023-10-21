#include<stdio.h>
#define reguler_price 10           // for reguler price $10
#define reguler_min 50             
#define reguler_over_charge 0.02
#define premium_price 25           // for premium am to pm || pm to am 
#define premium_am_price 0.10       
#define premium_pm_price 0.50
#define premium_am_min 75           //the min which is free under $25
#define premium_pm_min 100

float reguler(char service,int accnum);           //prototypes
float premium( char service,int accnum);

int main ()
{
int accnum;
char service;

printf("ENTER YOUR ACCOUNT NUMBER \n");           //account number
scanf("%d",&accnum);

printf ("ENTER YOUR SERVICE REGULER OR PREMIUM \n");      // asking about service reguler or premium 
scanf(" %c",&service);
if (service=='R' || service=='r' || service=='P' || service=='p')       // pass only r || R  and P || p    otherwise show error  
 {}
else 
  {
  printf("!!ERROR THIS SERVICE NOT AVALIBLE \n");
  return 0;
  }
reguler(service,accnum);         // function  call 
premium(  service,accnum);       // function call
 return 0;
}

float reguler(char service,int accnum)           //function for regurler 
{
float x,total;
int min;
  
  if (service=='R' || service=='r')                  
{
  printf("ENTER THE NUM OF MIN \n");
  scanf ("%d",&min);
  if( min<= reguler_min)                             //condition    reguler_min =50   declare in macron 
  {
  printf("YOUR ACCOUNT NUMBER IS %d \n",accnum);              // output  
   printf("YOUR ACCOUNT SEVICE IS  REGULER \n"); 
   printf("THE TOTAL MINUTES YOU USED IS %d \n",min);
 printf("TOTAL BILL FOR YOUR SERVICE IS %d\n",reguler_price);
 }
 else
 {
  x=reguler_over_charge*(min-reguler_min);                        // if coustomer use extra min 
  total=x+reguler_price;
  
   printf("YOUR ACCOUNT NUMBER IS %d \n",accnum);                // output
  printf("YOUR ACCOUNT SEVICE IS  REGULER \n"); 
  printf("THE TOTAL  MINUTES  YOU USED IS %d \n",min);
 printf("TOTAL BILL FOR YOUR SERVICE IS %.2f \n",total);
 
  }
}
}
 
float  premium( char service,int accnum)               //funtion for premium   
{
float x1,y1,x2,y2;
int minAM,minPM;
if (service=='P' || service=='p')
{
printf("ENTER THE NUM OF MIN FROM 6AM TO 6PM \n");        // am to pm 
scanf("%d",&minAM);
printf("ENTER THE NUM OF MIN FROM 6PM TO 6AM \n");        // pm to am
scanf("%d",&minPM);  
if (minAM<=premium_am_min)                        // condition for am to pm      premium_am_min =75    is declare in macron   
  {
  x1=premium_am_price*0;
  }
  else 
  {
  y1=premium_am_price*(minAM-premium_am_min);      // premium_am_min MACRON 
   }
   
   if(minPM<=premium_pm_min)                  // condition for am to am  premium_pm_min =100    is declare in macron  
   {
   x2=premium_pm_price*0;
   }
   else 
   {
   y2= premium_pm_price*(minPM-premium_pm_min);      // premium_pm_min  MACRON 
   }
    printf("YOUR ACCOUNT NUMBER IS %d \n",accnum);                  //output 
  printf("YOUR ACCOUNT SEVICE IS  PREMIUM \n"); 
  printf("THE TOTAL  MINUTES  YOU USED IN AM TO PM IS %d \n",minAM);
   printf("THE TOTAL  MINUTES  YOU USED IN PM TO AM IS %d \n",minPM);
    printf("TOTAL BILL FOR YOUR PREMIUM SERVICE IS %.2f\n",(y1+y2)*premium_price);       // premium_price =25   || y1 & y2 total of minutes with cahrges 
   
    
} 
}

  

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  


