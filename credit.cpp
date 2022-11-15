//made by Florian Susai
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
#include <unordered_map>
using namespace std;
ifstream in("credit.in");
ofstream out("credit.out");

int n,sum=1000;
char s[17],am;

int add()
{
    cout<<"Type your card's numbers you want to add money"<<"\n";
    cin>>s;
    bool abs=false;
      fstream fileobject ( "datab.txt" ); // open a filestream 
    char file[16*101+1]; 
     
        while ( fileobject >> file )
            {
                if(strcmp(s,file)==0&&strlen(s)==16)
                {
                    abs=true;
                    break;
                }

            }
    fileobject.close(); 
    while(abs==false)
    {
        cout<<"The card does not exist Please try again. Press y to try again or n to end the task"<<"\n";
        cin>>am;
        if(am == 'y'|| am =='Y')
        {
            cout<<"Type your card's numbers you want to add money"<<"\n";
            cin>>s;

            fstream fileobject ( "datab.txt" );
            while ( fileobject >> file )
            {
                if(strcmp(s,file)==0&&strlen(s)==16)
                {
                    abs=true;
                    break;
                }

            }
            fileobject.close(); 
        }
        if(am == 'n' || am == 'N')
        {
            return 0;
        }
    }
    abs=false;
    cout<<"Write your pin code:"<<"\n";
    cin>>s;
    fstream fleobject ( "pin.txt" );
            while ( fleobject >> file )
            {
                if(strcmp(s,file)==0&&strlen(s)==4)
                {
                    abs=true;
                    break;
                }

            }
    fleobject.close(); 
    while(abs==false)
    {
        cout<<"The pin code is wrong. Please try again. Press y to try again or n to end the task"<<"\n";
        cin>>am;
        if(am == 'y'|| am =='Y')
        {
            cout<<"Type the pin if you want to send money"<<"\n";
            cin>>s;

            fstream fleobject ( "pin.txt" );
            while ( fleobject >> file )
            {
                if(strcmp(s,file)==0&&strlen(s)==4)
                {
                    abs=true;
                    break;
                }

            }
            fleobject.close(); 
        }
        if(am == 'n' || am == 'N')
        {
            return 0;
        }
    }

    cout<<"Choose the amount of money you want to add"<<"\n";
    cin>>n;
    while(n>sum)
    {
        cout<<"The ammount of money you want to give is bigger than what you have. Please try again. Press y to try again or n to end the task"<<"\n";
        cin>>am;
        if(am == 'y'|| am =='Y')
        {
            cin>>n;
        }
        if(am == 'n' || am == 'N')
        {
            return 0;
        }
    }
    cout<<"DO NOT FORGET TO SAVE THE COMMAND CODE BEFORE YOU LEAVE(IGNORE THE 0 ON THE LAST LINE)"<<"\n";
    cout <<"Transaction succseful. Have a nice day!"<<"\n";
    cout<<"Command code:"<<"\n";
      
    srand((unsigned) time(0));
    int randomNumber;
  
    randomNumber = (rand() % 100000) + 1;
    cout << randomNumber << endl;
    return 0;
    
}
char py;
int pay()
{
    cout<<"Choose what service do you want to pay:"<<"\n"<<"E for Electricity / W for Water / G for Gas"<<"\n";
    cin>>py;
    //bool abs=false;
    if(py=='e'||py=='E')
    {
        cout<<"Electricity cost is 100"<<" ";
        cout<<"Are you sure you want to pay this month's bill. Press y for yes / n for no"<<"\n";
        cin>>py;
        if(py=='n')
         {   
         cout<<"Have a nice day!"<<"\n";
         return 0;
         }
        if(py=='y')
        {
            if(sum>=100)
            {
                sum-=100;
                cout<<"Bill payed. Have a nice day"<<"\n";
                //abs=true;
            }
            else
            {
                cout<<"You don't have enough cash. Try again later"<<"\n";
                return 0;
            }
        }
    cout<<"Command code:"<<"\n";
      
    srand((unsigned) time(0));
    int randomNumber;
  
    randomNumber = (rand() % 100000) + 1;
    cout << randomNumber << endl;
    return 0;
    }
    if(py=='g'||py=='G')
    {
        cout<<"Gas cost is 100"<<" ";
        cout<<"Are you sure you want to pay this month's bill. Press y for yes / n for no"<<"\n";
        cin>>py;
        if(py=='n')
         {   
         cout<<"Have a nice day!"<<"\n";
         return 0;
         }
        if(py=='y')
        {
            if(sum>=100)
            {
                sum-=100;
                cout<<"Bill payed. Have a nice day"<<"\n";
                //abs=true;
            }
            else
            {
                cout<<"You don't have enough cash. Try again later"<<"\n";
                return 0;
            }
        }
    cout<<"Command code:"<<"\n";
      
    srand((unsigned) time(0));
    int randomNumber;
  
    randomNumber = (rand() % 100000) + 1;
    cout << randomNumber << endl;
    return 0;
    }
    if(py=='w'||py=='W')
    {
        cout<<"Water cost is 100"<<" ";
        cout<<"Are you sure you want to pay this month's bill. Press y for yes / n for no"<<"\n";
        cin>>py;
        if(py=='n')
         {   
         cout<<"Have a nice day!"<<"\n";
         return 0;
         }
        if(py=='y')
        {
            if(sum>=100)
            {
                sum-=100;
                cout<<"Bill payed. Have a nice day"<<"\n";
                //abs=true;
            }
            else
            {
                cout<<"You don't have enough cash. Try again later"<<"\n";
                return 0;
            }
        }
    cout<<"Command code:"<<"\n";
      
    srand((unsigned) time(0));
    int randomNumber;
  
    randomNumber = (rand() % 100000) + 1;
    cout << randomNumber << endl;
    return 0;
    }
    return 0;

}

int trans()
{
    cout<<"Hello! Write your card's digit number:"<<"\n";
    cin>>s;
    bool abs=false;
    fstream fileobject ( "datab.txt" ); // open a filestream 
    char file[16*101+1]; 
     
        while ( fileobject >> file )
            {
                if(strcmp(s,file)==0&&strlen(s)==16)
                {
                    abs=true;
                    break;
                }

            }
    fileobject.close(); 
    while(abs==false)
    {
        cout<<"The card does not exist Please try again. Press y to try again or n to end the task"<<"\n";
        cin>>am;
        if(am == 'y'|| am =='Y')
        {
            cout<<"Type the card's number you want to send money"<<"\n";
            cin>>s;

            fstream fileobject ( "datab.txt" );
            while ( fileobject >> file )
            {
                if(strcmp(s,file)==0&&strlen(s)==16)
                {
                    abs=true;
                    break;
                }

            }
            fileobject.close(); 
        }
        if(am == 'n' || am == 'N')
        {
            return 0;
        }
    }

    abs=false;
    cout<<"Write your pin code:"<<"\n";
    cin>>s;
    fstream fleobject ( "pin.txt" );
            while ( fleobject >> file )
            {
                if(strcmp(s,file)==0&&strlen(s)==4)
                {
                    abs=true;
                    break;
                }

            }
    fleobject.close(); 
    while(abs==false)
    {
        cout<<"The pin code is wrong. Please try again. Press y to try again or n to end the task"<<"\n";
        cin>>am;
        if(am == 'y'|| am =='Y')
        {
            cout<<"Type the pin if you want to send money"<<"\n";
            cin>>s;

            fstream fleobject ( "pin.txt" );
            while ( fleobject >> file )
            {
                if(strcmp(s,file)==0&&strlen(s)==4)
                {
                    cout<<file<<"\n";
                    abs=true;
                    break;
                }

            }
            fleobject.close(); 
        }
        if(am == 'n' || am == 'N')
        {
            return 0;
        }
    }
    //the person u transfer the money
    //----------------------------------------------------------------
    cout<<"Write your friend's card's digit number:"<<"\n";
  

    cin>>s;
    abs=false;
    //fstream fileobject ( "datab.txt" ); // open a filestream 
    //char file[16*101+1]; 
     
        while ( fileobject >> file )
            {
                if(strcmp(s,file)==0&&strlen(s)==16)
                {
                    abs=true;
                    break;
                }

            }
    fileobject.close(); 
    while(abs==false)
    {
        cout<<"The card does not exist Please try again. Press y to try again or n to end the task"<<"\n";
        cin>>am;
        if(am == 'y'|| am =='Y')
        {
            cout<<"Type the card's number you want to send money"<<"\n";
            cin>>s;

            fstream fileobject ( "datab.txt" );
            while ( fileobject >> file )
            {
                if(strcmp(s,file)==0&&strlen(s)==16)
                {
                    abs=true;
                    break;
                }

            }
            fileobject.close(); 
        }
        if(am == 'n' || am == 'N')
        {
            return 0;
        }
    }
    cout<<"DO NOT FORGET TO SAVE THE COMMAND CODE BEFORE YOU LEAVE(IGNORE THE 0 ON THE LAST LINE)"<<"\n";
    cout <<"Transaction succseful. Have a nice day!"<<"\n";
    cout<<"Command code:"<<"\n";
      
    srand((unsigned) time(0));
    int randomNumber;
  
    randomNumber = (rand() % 100000) + 1;
    cout << randomNumber << endl;
    return 0;

}
int main()
{
    cout<<"Welcome to Fpay! Choose what do you want to do"<<"\n";
    cout<<"A to add money to your bank account / P to make an online payment / T to transfer money from one account to another"<<"\n"<<"\n";
    char c;
    cin>>c;
    if(c=='a'||c=='A')
    {
        cout<<add();
    }

    if(c=='p'||c=='P')
    {
        cout<<pay();
    }

    if(c=='t'||c=='T')
    {
        cout<<trans();
    }
    return 0;

}