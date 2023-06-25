#include<iostream>
#include<ctime>
using namespace std;

int main(){
	
	char start;
	float shop(void);
	char choice;
	long long mobileno;
	startL:
		cout<<"Please enter the key h to start the shopping for home appliances"<<endl;
		start:
			cin>>start;
			if(start=='h' || start=='H'){
			float total=shop();
			time_t t=time(NULL);
			tm*tptr=localtime(&t);
			
			cout<<"BILL DATE: ";
			cout<<tptr->tm_mday<<"/";
			cout<<1+tptr->tm_mon<<"/";
			cout<<1900+tptr->tm_year<<endl;
			cout<<"BILL TIME: "<<(tptr->tm_hour)<<":"<<(tptr->tm_min)<<":"<<(tptr->tm_sec)<<endl;
			cout<<"Enter your Mobile no: ";
			cin>>mobileno;
			cout<<"Mobile-no entered by user: "<<mobileno<<endl;
			cout<<"Total Bill Ammount :"<<total<<endl;
			if(total>50000){
				total=total-(0.05*total);
				cout<<"Total Discount : 5%"<<endl;
			}
			else if(total>100000){
				total=total-(0.01*total);
				cout<<"Total Discount : 10%"<<endl;
			}
			else if(total>150000){
				total=total-(0.15*total);
				cout<<"Total Discount : 15%"<<endl;
			}
		   else	if(total>200000){
				total=total-(0.20*total);
				cout<<"Total Discount : 20%"<<endl;
			}
			cout<<"Total Bill Amount Is :"<<total<<endl;
			Again:
				cout<<"Do You Want To Shopping Again Then Press y or n Anyone "<<endl;
				cin>>choice;
				if(choice=='y' || choice=='Y'){
					goto startL;
				}
				else if(choice=='n' || choice=='N'){
					cout<<"Thanks For Shopping"<<endl;
				}
				else{
					cout<<"You have entered wrong key ,please entered h "<<endl;
					goto Again;
				}
			}
			else{
					cout<<"You have entered wrong key ,please entered h "<<endl;
					goto start;
			}
}

        float shop(){
        	shop:
        		char choice;
        		char product;
        		int quantity;
        		float bill=0;
        		itemName:
        			cout<<"\n\t\t\t\t\t\t----------------------------";
        			cout<<"\n\t\t\t\t\t\t\tBilling System";
        			cout<<"\n\t\t\t\t\t\t----------------------------"<<endl;
        			cout<<"\n\t\t\t\t\t********************WELCOME***********************"<<endl;
        			cout<<"\n---------Please follow the instructions stricly---------"<<endl;
        			cout<<"\n1) Enter the key r for Refrigerator"<<endl;
        			cout<<"2) Enter the key w for Washing Machine"<<endl;
        			cout<<"3) Enter the key t for Telivision"<<endl;
        			cout<<"4) Enter the key p for Mobile Phone"<<endl;
        			cout<<"5) Enter the key m for Microwave"<<endl;
        			cin>>choice;
        			if(choice=='r' || choice=='R' || choice=='w' || choice=='W' || choice=='t' ||choice=='T' || choice=='p' || choice=='P' || choice=='m' || choice=='M' ){
        				if(choice=='r' || choice=='R'){
        					RefrigeratorL:
        					cout<<"-----------Refrigerator Details-----------"<<endl;
        					cout<<"1) Whirpool => Price: 60000 "<<endl;
        					cout<<"2) LG       => Price: 50000 "<<endl;
        					cout<<"3) Godrej   => Price: 45000 "<<endl;
        					cout<<"4) Samsung  => Price: 44000 "<<endl;
        					
        					cout<<"Please enter your choice"<<endl;
        					cin>>product;
        					if(product=='1'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*60000;
							}
							else if(product=='2'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*50000;
							}
							else if(product=='3'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*45000;
							}
							else if(product=='4'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*44000;
							}
							else{
								cout<<"You entered the wrong key , please try again"<<endl;
								goto RefrigeratorL;
							}
						}
						if(choice=='w' || choice=='W'){
							WashingMachineL:
        					cout<<"----------Washing Machine Details-----------"<<endl;
        					cout<<"1) Whirpool => Price: 58000 "<<endl;
        					cout<<"2) IFB      => Price: 55000 "<<endl;
        					cout<<"3) Bosch    => Price: 50000 "<<endl;
        					cout<<"4) Samsung  => Price: 49000 "<<endl;
        					
        					cout<<"Please enter your choice"<<endl;
        					cin>>product;
        					if(product=='1'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*58000;
							}
							else if(product=='2'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*55000;
							}
							else if(product=='3'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*50000;
							}
							else if(product=='4'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*49000;
							}
							else{
								cout<<"You entered the wrong key , please try again"<<endl;
								goto WashingMachineL;
							}
						}
						if(choice=='t' || choice=='T'){
							TelevisionL:
        					cout<<"-----------Television Details------------"<<endl;
        					cout<<"1) Sony     => Price: 30000 "<<endl;
        					cout<<"2) LG       => Price: 25000 "<<endl;
        					cout<<"3) Haier    => Price: 22000 "<<endl;
        					cout<<"4) Samsung  => Price: 21000 "<<endl;
        					
        					cout<<"Please enter your choice"<<endl;
        					cin>>product;
        					if(product=='1'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*30000;
							}
							else if(product=='2'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*25000;
							}
							else if(product=='3'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*22000;
							}
							else if(product=='4'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*21000;
							}
							else{
								cout<<"You entered the wrong key , please try again"<<endl;
								goto TelevisionL;
							}
						}
						if(choice=='p' || choice=='P'){
							MobilePhoneL:
        					cout<<"-----------Mobile Phone Details------------"<<endl;
        					cout<<"1) Apple        => Price: 60000 "<<endl;
        					cout<<"2) Samsung      => Price: 40000 "<<endl;
        					cout<<"3) Oppo         => Price: 20000 "<<endl;
        					cout<<"4) Redmi        => Price: 15000 "<<endl;
        					
        					cout<<"Please enter your choice"<<endl;
        					cin>>product;
        					if(product=='1'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*60000;
							}
							else if(product=='2'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*40000;
							}
							else if(product=='3'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*20000;
							}
							else if(product=='4'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*15000;
							}
							else{
								cout<<"You entered the wrong key , please try again"<<endl;
								goto MobilePhoneL;
							}
						}
						if(choice=='m' || choice=='M'){
							MicrowaveL:
        					cout<<"-----------Microwave Details------------"<<endl;
        					cout<<"1) Panasonic => Price: 50000 "<<endl;
        					cout<<"2) LG        => Price: 45000 "<<endl;
        					cout<<"3) Haier     => Price: 40000 "<<endl;
        					cout<<"4) Samsung   => Price: 35000 "<<endl;
        					
        					cout<<"Please enter your choice"<<endl;
        					cin>>product;
        					if(product=='1'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*50000;
							}
							else if(product=='2'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*45000;
							}
							else if(product=='3'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*40000;
							}
							else if(product=='4'){
        						cout<<"Enter the quantity of the product"<<endl;
        						cin>>quantity;
        						bill=bill+quantity*35000;
							}
							else{
								cout<<"You entered the wrong key , please try again"<<endl;
								goto  MicrowaveL;
							}
						}
					}
						else{
							cout<<"You entered the wrong key , please try again"<<endl;
							goto shop;
						}
					return bill;
		}

















