#include<iostream>
#include<string>
#include<array>
#include<ctime>
#include <stdio.h>


int main()
{
std::cout<<"Game "<<"Rock, Paper or Scissors"<<" with computer"<<std::endl;
std::cout<<std::endl;
std::cout<<"Please, enter your choice..."<<std::endl;
srand(time(NULL));
     int CompChoice =  rand() % 3;
        std::string UserChoice;
         std::cin >> UserChoice;
        std::string choice[3] = {"Rock","Paper","Scissors"};
switch(CompChoice)
{
	case 0:
	  {
	if(UserChoice=="Rock"){std::cout<<"Your choice was : " <<UserChoice<<std::endl;
			std::cout<<"Computer choice was : "<<choice[CompChoice]<<std::endl;
			std::cout<<"Rezult : "<<"A Draw"<<std::endl;	
 	  }
	 if(UserChoice=="Paper"){std::cout<<"Your choice was : " <<UserChoice<<std::endl;      
        std::cout<<"Computer choice was : "<<choice[CompChoice]<<std::endl;  
            std::cout<<"Rezult : "<<"You won"<<std::endl;                    
		}
    if(UserChoice=="Scissors"){std::cout<<"Your choice was : " <<UserChoice<<std::endl; 
             std::cout<<"Computer choice was : "<<choice[CompChoice]<<std::endl;        
      std::cout<<"Rezult : "<<"Computer won"<<std::endl;                    
		}
		break;
          
}
        case 1:
	  {
	if(UserChoice=="Paper"){std::cout<<"Your choice was : " <<UserChoice<<std::endl;
			std::cout<<"Computer choice was : "<<choice[CompChoice]<<std::endl;
			std::cout<<"Rezult : "<<"A Draw"<<std::endl;	
 	  }
	 if(UserChoice=="Scissors"){std::cout<<"Your choice was : " <<UserChoice<<std::endl;      
        std::cout<<"Computer choice was : "<<choice[CompChoice]<<std::endl;  
            std::cout<<"Rezult : "<<"You won"<<std::endl;                    
		}
    if(UserChoice=="Rock"){std::cout<<"Your choice was : " <<UserChoice<<std::endl; 
             std::cout<<"Computer choice was : "<<choice[CompChoice]<<std::endl;        
      std::cout<<"Rezult : "<<"Computer won"<<std::endl;                    
		}
		break;
          
}
        case 2:
	  {
	if(UserChoice=="Scissors"){std::cout<<"Your choice was : " <<UserChoice<<std::endl;
			std::cout<<"Computer choice was : "<<choice[CompChoice]<<std::endl;
			std::cout<<"Rezult : "<<"A Draw"<<std::endl;	
 	  }
	 if(UserChoice=="Rock"){std::cout<<"Your choice was : " <<UserChoice<<std::endl;      
        std::cout<<"Computer choice was : "<<choice[CompChoice]<<std::endl;  
            std::cout<<"Rezult : "<<"You won"<<std::endl;                    
		}
    if(UserChoice=="Paper"){std::cout<<"Your choice was : " <<UserChoice<<std::endl; 
             std::cout<<"Computer choice was : "<<choice[CompChoice]<<std::endl;        
      std::cout<<"Rezult : "<<"Computer won"<<std::endl;                    
		}
		break;
          
}
}   
}
