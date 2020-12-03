#include <iostream>
#include <stdlib.h> /*Standard Library*/

using namespace std;

class average
{
	public:
		void input();
		void initialize();
		void output();
		float arr[100] , ave, total;
		int  temp,i, size;
};

void average :: input()
{

	cout<<"\nInput Number/s: ";
	//run this loop for making array input with null terminator <enter key>
	for (temp=0; ; temp++)
	{
		cin>>arr[temp];
		if(cin.get()=='\n') { 
		break;
		}
	}
	
}

void average :: initialize()
{
	//For calculating average
	size=temp+1;
	cout<<"\n\nNumbers are: ";
	
	for (i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	total = 0;
	
	for (i=0; i<size; i++)
	{
		total=arr[i]+total;
	}
	
	ave=total/size;
}

void average :: output()
{
	cout<<"\n\nSize of input is: "<<size<<"\nTotal is: "<< total<<"\n\nAverage is: "<< ave<<"\n"<<endl;
}

int main() {
	
	char ch;
	
	do{
		cout<<"\nMenu:\n[N] Get Average\n[E] Exit!\n"<<endl;
		cin>>ch;
		switch(ch){
			
			case 'N': {
            average hi;
			hi.input();
			hi.initialize();
			hi.output();
            break;
         }
        
        	case 'n':{
        	average hi;
			hi.input();
			hi.initialize();
			hi.output();
            break;
				}
    
		    case  'E' : {
            cout<<"Exit"<<endl;
            break;
         }
    
	     case  'e' : {
            cout<<"Exit"<<endl;
            break;
         } 
    
	     default: {
            cout<<"Invalid Choice!"<<endl;
         }
      }
      
      system ("PAUSE"); //Pause the code until pressing other keys
      system ("CLS"); //Clears input display
      

   }while(ch!='e' && ch!='E');
	
	return 0;
}
