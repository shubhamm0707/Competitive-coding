#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

bool prime[10000000];
int arr[10000000];

bool SieveOfEratosthenes(int n)
{
	

	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++)
	{
	
		if (prime[p] == true)
		{
			
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}
   
   prime[0]=0;
   prime[1]=0;

		return prime[n];

}



void Primess()
{
  int c=0;
  
for(int i=0;i<=1e7;i++)
{
  if(prime[i])
  {
    c++;
  }

  arr[i]=c;
}

}



int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

SieveOfEratosthenes(1e7);
Primess();  

 ll t;
 cin>>t;

 while(t--)
 {
  
   ll l,r;
   cin>>l>>r;

   if((l-r)<(r-2))
   {
     
    cout<<r<<endl;
  
   }else
   {
     cout<<-1<<endl;
   }
   

 }

}
