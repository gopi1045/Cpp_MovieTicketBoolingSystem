//ONLINE MOVIE RESERVATION SYSTEM
//EXCEPTION HANDLING
//FRIEND CLASS
//SINGLE INHERITANCE
//ABSTRACT CLASS
#include<iostream>
#include<string.h>
using namespace std; 
class login
{
	public:
		long long phno;
        virtual void signin()=0;
};	
class theatre : public login
{    public:
	 int i,tch,n,mch,ech,j,b1[201],b2[201],b3[201],seatnum[100];
	 string movies[4];
	 int k;
	 theatre()
	 {
	 for(int i=1;i<=200;i++)
     	{
     		b1[i]=b2[i]=b3[i]=0;
		 }
	}
	 //abstract class definition
		 void signin()
		 {
				
			    s:cout<<"\nENTER THE PHONE NUMBER:";
			    try
			    {
			    cin>>phno;
			    if(phno>9999999999||phno<5999999999)
			    throw phno;
			    else
			    cout<<"\nLOGGED IN SUCCESSFULLY";
			}
			catch(long long phone)
			{
				cout<<phone<<"is not a valid phone number";
		goto s;
	}
}
		            void vettri()
     				{
					 cout<<"WELCOME TO VETTRI CINEMAS\n";
					 g1:cout<<"DO YOU WANT TO BOOK IN ELITE,GOLD OR SILVER:\n";
					 cout<<"\n1.ELITE\n2.GOLD\n3.SILVER:";
					 try
     				{
     					cin>>ech;
     					if(ech>3)
     					throw 1;
					 }
					 catch(int z)
					 {cout<<"\nENTER CHOICE WITHIN 1 TO 3:\n";
					 goto g1;
					 }
					cout<<"\nUPCOMING MOVIES";
     				movies[1]="KAPPAN";
     				movies[2]="COMALI";
     				movies[3]="MAGAMUNI";
     				cout<<"\n1.11:00 AM--KAPPAN\n2.2.00 PM--COMALI\n3.6.00 PM--MAGAMUNI\n";
     				cout<<"ENTER YOUR OPTION:\n";
     			     cin>>mch;
     				cout<<"SELECTED MOVIE:"<<movies[mch];
     				if(ech==1)
     				{
     					l1:
     					p:cout<<"\nENTER THE NUMBER OF SEATS YOU WANT TO BOOK AND ENTER SEAT NUMBERS FROM 151 TO 200:";
     					cin>>n;
     					for(i=0;i<n;i++)
     					{
     						try
     						{
     					cin>>seatnum[i];
     					if(seatnum[i]<=150)
     					throw 1;
     				       }
     				       catch(int x)
     				       {
     				       cout<<"\nENTER SEAT NUMBER BETWEEN 151 TO 200";
     				       goto l1;
							}
     					b1[seatnum[i]]=1;
     				    }
     				    
     					cout<<"\nSEATS BOOKED BY YOU:";
				        for(i=0;i<n;i++)
				        {
				        	cout<<"\n"<<"\t"<<seatnum[i];
						}
     					cout<<"\nAVAIALBLE SEATS ARE:\n";
     					for(j=1;j<=200;j++)
     					{
     						if(b1[j]!=1)
     						cout<<"\t"<<j;
     						else
     						cout<<"\t-NA-";
     					}
     				}
     				
						if(ech==2)
     				    {
     				    	l2:
     					cout<<"\nENTER THE NUMBER OF SEATS YOU WANT TO BOOK AND ENTER SEAT NUMBERS FROM 51 TO 150:";
     					cin>>n;
     					for(i=0;i<n;i++)
     					{
     				     try
     						{
     					cin>>seatnum[i];
     					if(seatnum[i]<=50||seatnum[i]>150)
     					throw 1;
     				       }
     				       catch(int x)
     				       {
     				       cout<<"\nENTER SEAT NUMBER BETWEEN 151 TO 200";
							goto l2;
							}
     					b1[seatnum[i]]=1;
     				    }
     					cout<<"\nSEATS BOOKED BY YOU:";
				        for(i=0;i<n;i++)
				        {
				        	cout<<"\n"<<"\t"<<seatnum[i];
						}
     				cout<<"\nAVAIALBLE SEATS ARE:\n";
     					for(j=1;j<=200;j++)
     					{
     						if(b1[j]!=1)
     						cout<<"\t"<<j;
     						else
     						cout<<"\t-NA-";
     					}
					}
						if(ech==3)
     			    {
					    l3: 
     					cout<<"\nENTER THE NUMBER OF SEATS YOU WANT TO BOOK AND ENTER SEAT NUMBERS FROM 1TO 50:";
     					cin>>n;
						 for(i=0;i<n;i++)
     					{
     					try
     						{
     					cin>>seatnum[i];
     					if(seatnum[i]>50)
     					throw 1;
     				       }
     				       catch(int x)
     				       {
     				       cout<<"\nENTER SEAT NUMBER BETWEEN 151 TO 200";
							goto l3;
							}
     			         
     					b1[seatnum[i]]=1;
						}
     					
     				    cout<<"\nSEATS BOOKED BY YOU:";
				        for(i=0;i<n;i++)
				        {
				        	cout<<"\n"<<"\t"<<seatnum[i];
						}
     				cout<<"\nAVAIALBLE SEATS ARE:\n";
     					for(j=1;j<=200;j++)
     					{
     						if(b1[j]!=1)
     						cout<<"\t"<<j;
     						else
     						cout<<"\t-NA-";
     					}
					}
				}
			
		 void pvr()
		 	{
		 	cout<<"WELCOME TO PVR CINEMAS\n";
					 g2:cout<<"DO YOU WANT TO BOOK IN ELITE,GOLD OR SILVER:";
					 cout<<"\n1.ELITE\n2.GOLD\n3.SILVER:\n";
			         try
     				{
     					cin>>ech;
     					if(ech>3)
     					throw 1;
					 }
					 catch(int z)
					 {cout<<"\nENTER CHOICE WITHIN 1 TO 3:\n";
					 goto g2;
					 }
     				cout<<"\nUPCOMING MOVIES";
     				movies[1]="COMALI";
     				movies[2]="SMP";
     				movies[3]="VEERAM";
     				cout<<"\n1.11:00 AM--COMALI\n2.2.00 PM--SMP\n3.6.00 PM--VEERAM\n";
     				cout<<"ENTER YOUR OPTION:\n";
     				cin>>mch;
     				cout<<"SELECTED MOVIE:"<<movies[mch];
     				if(ech==1)
     				{
     					l4:
						 cout<<"\nENTER THE NUMBER OF SEATS YOU WANT TO BOOK AND ENTER SEAT NUMBERS FROM 151 TO 200:";
     					cin>>n;
     					for(i=0;i<n;i++)
     					{
     					try
     						{
     					cin>>seatnum[i];
     					if(seatnum[i]<=150)
     					throw 1;
     				       }
     				       catch(int x)
     				       {
     				       cout<<"\nENTER SEAT NUMBER BETWEEN 151 TO 200";
     				       goto l4;
							}
     					b2[seatnum[i]]=1;
     				}
     					cout<<"\nSEATS BOOKED BY YOU:";
				        for(i=0;i<n;i++)
				        {
				        	cout<<"\n"<<"\t"<<seatnum[i];
						}
     					cout<<"\nAVAIALBLE SEATS ARE:\n";
     					for(j=1;j<=200;j++)
     					{
     						if(b2[j]!=1)
     						cout<<"\t"<<j;
     						else
     						cout<<"\t-NA-";
     					}
     				    }
     				    
					if(ech==2)
     				{
     					l5:
     					cout<<"\nENTER THE NUMBER OF SEATS YOU WANT TO BOOK AND ENTER SEAT NUMBERS FROM 51 TO 150:";
     					cin>>n;
     					for(i=0;i<n;i++)
     					{
     					try
     						{
     					cin>>seatnum[i];
     					if(seatnum[i]<=50||seatnum[i]>150)
     					throw 1;
     				       }
     				       catch(int x)
     				       {
     				       cout<<"\nENTER SEAT NUMBER BETWEEN 151 TO 200";
							goto l5;
							}
     					b2[seatnum[i]]=1;
     				   } 
     					cout<<"\nSEATS BOOKED BY YOU:";
				        for(i=0;i<n;i++)
				        {
				        	cout<<"\n"<<"\t"<<seatnum[i];
						}
     				cout<<"\nAVAIALBLE SEATS ARE:\n";
     				for(j=1;j<=200;j++)
     					{
     						if(b2[j]!=1)
     						cout<<"\t"<<j;
     						else
     						cout<<"\t-NA-";
     					}
     				}
						if(ech==3)
     				{
     					l6:
     					cout<<"\nENTER THE NUMBER OF SEATS YOU WANT TO BOOK AND ENTER SEAT NUMBERS FROM 1TO 50:";
     					cin>>n;
     					for(i=0;i<n;i++)
     					{
     					try
     						{
     					cin>>seatnum[i];
     					if(seatnum[i]>50)
     					throw 1;
     				       }
     				       catch(int x)
     				       {
     				       cout<<"\nENTER SEAT NUMBER BETWEEN 151 TO 200";
							goto l6;
							}
     					b2[seatnum[i]]=1;
				        }
				        cout<<"\nSEATS BOOKED BY YOU:";
				        for(i=0;i<n;i++)
				        {
				        	cout<<"\n"<<"\t"<<seatnum[i];
						}
     			cout<<"\nAVAIALBLE SEATS ARE:\n";
     					for(j=1;j<=200;j++)
     					{
     						if(b2[j]!=1)
     						cout<<"\t"<<j;
     						else
     						cout<<"\t-NA-";
     					}
					}	
				}
        void rakki()
        	{
        		cout<<"WELCOME TO RAKKICINEMAS\n";
					 g3:cout<<"DO YOU WANT TO BOOK IN ELITE,GOLD OR SILVER:";
					 cout<<"\n1.ELITE\n2.GOLD\n3.SILVER:\n";
					 try
     				{
     					cin>>ech;
     					if(ech>3)
     					throw 1;
					 }
					 catch(int z)
					 {cout<<"\nENTER CHOICE WITHIN 1 TO 3:\n";
					 goto g3;
					 }
     				cout<<"\nUPCOMING MOVIES";
     				movies[1]="BIGIL";
     				movies[2]="ASURAN";
     				movies[3]="MANKATHA";
     				cout<<"\n1.11:00 AM--BIGIL\n2.2.00 PM--ASURAN\n3.6.00 PM--MANKATHA\n";
     				cout<<"ENTER YOUR OPTION:\n";
     				cin>>mch;
     				cout<<"SELECTED MOVIE:"<<movies[mch];
     				if(ech==1)
     				{
     					l7:
     					cout<<"\nENTER THE NUMBER OF SEATS YOU WANT TO BOOK AND ENTER SEAT NUMBERS FROM 151 TO 200:";
     					cin>>n;
     					for(i=0;i<n;i++)
     					{
     					try
     						{
     					cin>>seatnum[i];
     					if(seatnum[i]<=150)
     					throw 1;
     				       }
     				       catch(int x)
     				       {
     				       cout<<"\nENTER SEAT NUMBER BETWEEN 151 TO 200";
							goto l7;
							}
     					b3[seatnum[i]]=1;
     				}
     					cout<<"\nSEATS BOOKED BY YOU:";
				        for(i=0;i<n;i++)
				        {
				        	cout<<"\n"<<"\t"<<seatnum[i];
						}
     					cout<<"\nAVAILABLE SEATS ARE:\n";
     					for(j=1;j<=200;j++)
     					{
     						if(b3[j]!=1)
     						cout<<"\t"<<j;
     						else
     						cout<<"\t-NA-";
     					}
					}
						if(ech==2)
     				{
     					l8:
     					cout<<"\nENTER THE NUMBER OF SEATS YOU WANT TO BOOK AND ENTER SEAT NUMBERS FROM 51 TO 150:";
     					cin>>n;
     					for(i=0;i<n;i++)
     					{
     					try
     						{
     					cin>>seatnum[i];
     					if(seatnum[i]<=50||seatnum[i]>150)
     					throw 1;
     				       }
     				       catch(int x)
     				       {
     				       cout<<"\nENTER SEAT NUMBER BETWEEN 151 TO 200";
							goto l8;
							}
     					b3[seatnum[i]]=1;
     				    } 
     					cout<<"\nSEATS BOOKED BY YOU:";
				        for(i=0;i<n;i++)
				        {
				        	cout<<"\n"<<"\t"<<seatnum[i];
						}
     					cout<<"\nAVAIALBLE SEATS ARE:\n";
     				for(j=1;j<=200;j++)
     					{
     						if(b3[j]!=1)
     						cout<<"\t"<<j;
     						else
     						cout<<"\t-NA-";
     					}
     				}
     					
						if(ech==3)
     				{
     					l9:
     					cout<<"\nENTER THE NUMBER OF SEATS YOU WANT TO BOOK AND ENTER SEAT NUMBERS FROM 1TO 50:";
     					cin>>n;
     					for(i=0;i<n;i++)
     					{
     					try
     						{
     					cin>>seatnum[i];
     					if(seatnum[i]>50)
     					throw 1;
     				       }
     				       catch(int x)
     				       {
     				       cout<<"\nENTER SEAT NUMBER BETWEEN 151 TO 200";
							goto l9;
							}
     					b3[seatnum[i]]=1;
				        }
				        cout<<"\nSEATS BOOKED BY YOU:";
				        for(i=0;i<n;i++)
				        {
				        	cout<<"\n"<<"\t"<<seatnum[i];
						}
     					cout<<"\nAVAIALBLE SEATS ARE:\n";
     					for(j=1;j<=200;j++)
     					{
     						if(b3[j]!=1)
     						cout<<"\t"<<j;
     						else
     						cout<<"\t-NA-";
     					}
						}		
		 	}
friend class payment;		 
};
class payment
{
	private:
		int gphno;
		float tcost;
		  //float ibal=5000;
	public:
			 float compute(theatre th,float ibal)
			{
				if((th.ech)==1)
				{
				tcost=(th.n)*200;
				cout<<"\nTOTAL COST="<<tcost;
			    }
				else if((th.ech)==2)
				{	
				tcost=(th.n)*150;
				cout<<"\nTOTAL COST="<<tcost;
					
				}
				else
				{
				tcost=(th.n)*100;
				cout<<"\nTOTAL COST="<<tcost;
				}
		    	cout<<"\nAVAILABLE BALANCE:\t"<<ibal;
		    	ibal=ibal-tcost;
		    	cout<<"\nBALANCE AFTER PAYMENT:"<<ibal;
		    	cout<<"\nTICKET BOOKED SUCCESSFULLY!!!";
		        return ibal;
				}
		        
		        
};
int main()
{
	char opch;
	int cost=5000,tch;
    theatre t;
    t.signin();
    A:
     	cout<<"\nLIST OF THEATRES:\n";
     	cout<<"1.VETTRI\n2.PVR\n3.RAKKICINEMAS\n";
     		g4:cout<<"\nENTER THE NUMBER OF THEATRE YOU WANT TO BOOK TICKET FROM THE ABOVE LIST:";
     		try
     		{
     			cin>>tch;
     			if(tch>3)
     			throw 1;
			 }
			 catch(int x)
			 {
			 	cout<<"\nENTER CHOICE BETWEEN 1 TO 3:\n";
			 	goto g4;
			 }
    if(tch==1)
    t.vettri();
    else if(tch==2)
    t.pvr();
    else
    t.rakki();
	payment p;
	cost=p.compute(t,cost);
	cout<<"\nDO YOU WANT TO BOOK TICKET AGAIN:(Y/N):";
		        cin>>opch;
		        if(opch=='y'||opch=='Y')
		        goto A;
		        return 0;
}