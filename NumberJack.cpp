#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{   
cout<<"\n\n\n\n    °°°°°°° NUMBERJACK °°°°       \n";	
int choice;
int i=0;
int n0;
int p,n;
int n1;
const unsigned int u=10;
int k[u];
char name[100];
cout<<"\n\n\n   Enter your name here!"<<endl;
cin.getline(name,100);

do{
	cout<<"_____________________"<<endl;
  cout<<"PLAY:  hit 1 and enter"<<endl;
  cout<<"INFO : hit 2 and enter"<<endl;	
  cout<<"EXIT:  hit 3 and enter"<<endl;
  
  cin>>choice;
  switch(choice)
  {
  	case 1:
  cout<<"Choose a number between 0 & 9 :"<<endl;
cin>>n0;
  	  p=0;
  	  	do{  
                          srand(time(0));
  		                 
  		                  for(int i=1;i<=10;i++)
  		                  {
  		                    k[i]=rand()%10;
  		             
  		             }	  
  		             
  		          for(i=1;i<=10;i++)           
  		  {int j=i+1;
  		 do{ 
  		 
  		  	if(k[i]==k[j])
  		  	   {
  		  		k[j] = rand()%10;
  		     	 }
  		     	 
  		     	 	if(i>=2 ){
		for(n=1;n!=i;n++){
			if(k[i]==k[n]){
				k[i]=rand()%10;}}}
  		 
  		     	 j=j+1;
  		   
  		   }while(j<=10);	
  		  	cout<<k[i]<<"       ";
  		  	
  			}       		                                                                                             
cout<<""<<endl;	cout<<"________________________________________________________________________|"<<endl;
	cout<<"1       2       3       4       5       6       7       8       9      10"<<endl;
	cout<<""<<endl;
	n1=i+1;
		cout<<""<<endl;
		cin>>n1;
		cout<<"\n\n "<<endl;
if(k[n1]==n0)
{
	p=p+1;
	continue;}
else{
	cout<<"game over.."<<endl;
	break;}
  	  	}while(n1==k[i]);
  	  	cout<<""<<endl;
  	  	cout<<""<<endl;
  	  	cout<<name <<"  scored  "<< p <<"  points."<<endl;
  	  	cout<<endl;
  	  	cout<<" _________________ "<<endl;
  	  	break;
  	  	
  	case 2:
  	cout<<"@ Enter your name ."<<endl;
  	 cout<<"@ Choose a number between 0 and 9."<<endl;
  	cout<<"@ Then a list of 10 numbers will appear in front of you."<<endl;
  	cout<<"@ Select your number with reference number below the number you entered ."<<endl;
  	cout<<"@ Continue till you misplace the number."<<endl;
  	cout<<endl;
  		break;
  		
  case 3 :
  cout<<endl;
  cout<<endl;
  cout<<name;
 cout<<" , Thanks for playing.";
 cout<<" \n\n\n___*NUMBERJACK*___\n\n\n\n"<<endl;
 	break;
 	
	default :
  	cout<<"Invalid..";  
}
}while(choice!=3);
 } 
