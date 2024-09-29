#include <iostream>
using namespace std;
void flowerShop(float,float,float);

main()
{
	float redRose,whiteRose,tulip;
	cout<<"Number of Red Rose: ";
	cin>> redRose;
	cout<<"Number of White Rose: ";
	cin>> whiteRose;
	cout<<"Number of Tulips: " ;
	cin>> tulip;

	flowerShop(redRose,whiteRose,tulip);	
}

void flowerShop(float redRose,float whiteRose,float tulip)
{
	float originalPrice=(redRose*2)+(whiteRose*4.1)+(tulip*2.5);
	cout<<"Original Price is: "<<originalPrice<<endl;

	if(originalPrice>200)
	{ float discount=originalPrice-(originalPrice*0.2);
	cout<<"Price after discount: "<<discount;	}

	if(originalPrice<=200)
	{ cout<<"No discount applied."; }
}