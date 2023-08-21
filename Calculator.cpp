#include <iostream>
using namespace std;
int main()
{ cout << "Choose the command: add (+), subtract(-), multiply (*), divide (/), exponential function (E), trigonometric functions(T):";
    char op;
    cin >> op;
    if (op== '+')
    {cout << "give two numbers:";
        double num1;
        double num2;
        cin >> num1;
        cin >> num2;
        cout << num1 + num2;}
    else if (op== '-')
    {cout << "give two numbers:";
        double num1;
        double num2;
        cin >> num1;
        cin >> num2;
        cout << num1 - num2;}
     else if (op== '*')
    {cout << "give two numbers:";
        double num1;
        double num2;
        cin >> num1;
        cin >> num2;
        cout << num1 * num2;}
     else if (op== '/')
    {cout << "give two numbers:";
        double num1;
        double num2;
        cin >> num1;
        cin >> num2;
        if (num2!=0)
       { cout << num1/ num2;}
        else 
        {cout << "zero error";}
    }
    else if (op == 'E')
    {cout << "Euler's number(e) or others(O):";
    char ask;
    cin >> ask;
    if( ask != 'e')
    {
     cout << "Enter the base and exponent(Exponent in integers only):";
     double base;
     double exponent;
     cin >> base >> exponent;
     double p=1;
     double result = 1;
     if(base !=0)
     {if(exponent !=0)
    { while(p <= exponent)
     {result = result*base;
     p++;}
    cout << result << endl;
    }
     else { cout << '1'; }}
     else {
        if (exponent == 0)
         {cout << "limit error";}
         else {
             cout << '0';
         } } }
        else{
            cout << "Enter the exponent(positive integers only):";
            double base= 2.718281828459045;
            double exponent;
            
     cin >> exponent;
     double p=1;
     double result = 1;
     
     {if(exponent !=0)
    { while(p <= exponent)
     {result = result*base;
     p++;}
    cout << result << endl;
    }
     else { cout << '1'; }}
    }
    }
    else if (op == 'T')
    {
        cout << "Choose Trigonometric function (Sin, Cos, Tan, Sec, Cosec, Cot):";
        string trigo;
        cin >> trigo;
        cout << "Choose the Measurement system{Degree(D), Radian(R)}:";
        char syst;
        cin >> syst;
         if   (trigo =="Sin")
           { if(syst == 'D')
            {
                 cout << "Enter Number:";
                double p;
                cin >> p;
                double k = (p*3.14159265359)/180;


             cout << k - k*k*k/6 + k*k*k*k*k/120 - k*k*k*k*k*k*k*k/5040 + k*k*k*k*k*k*k*k*k/362880 - (k*k*k*k*k*k*k*k*k*k*k)/39916800 + k*k*k*k*k*k*k*k*k*k*k*k*k/6227020800;   
            }
            else if (syst == 'R')
            {
                 cout << "Enter Number:";
             double k;
                cin>>k;
                 cout << k - k*k*k/6 + k*k*k*k*k/120 - k*k*k*k*k*k*k*k/5040 + k*k*k*k*k*k*k*k*k/362880 - (k*k*k*k*k*k*k*k*k*k*k)/39916800 + k*k*k*k*k*k*k*k*k*k*k*k*k/6227020800;
            }
            else {cout << "Wrong Input";}
           }
             else if   (trigo =="Cos")
           { if(syst == 'D')
            {
               cout << "Enter Number:";
                 double p;
                cin >>p;
                double k = (p*3.14159265359)/180;
             cout << 1- k*k/2 + k*k*k*k/24 - k*k*k*k*k*k/720 + k*k*k*k*k*k*k*k/40320;  
                }
            else if (syst == 'R')
            {
                cout << "Enter Number:";
                 double k;
                cin>>k;
                 cout << 1- k*k/2 + k*k*k*k/24 - k*k*k*k*k*k/720 + k*k*k*k*k*k*k*k/40320; 
            }
            else {cout << "Wrong Input";}
           }
            else if   (trigo =="Tan")
           { if(syst == 'D')
            {
                 cout << "Enter Number:";

                int p;
                cin >>p;
            if(p>=360)
               { int d = p%360;
                 switch (d)
                 { case 90:
                 cout << "Not defined";
 break;                
  case 270:               
    cout << "Not defined";            
        break;
        default:     
                  double k = (d*3.14159265359)/180;
              double z= k + k*k*k/3 + 2*k*k*k*k*k/15 + 17*k*k*k*k*k*k*k/315 + 69*k*k*k*k*k*k*k*k*k/2835 ; 
cout << z;
  } }
            else{
                switch (p)
                 { case 90:
                 cout << "Not defined";
                 break;                
                 case 270:               
                  cout << "Not defined";            
                   break;
                   default:     
                  double k = (p*3.14159265359)/180;
              double z= k + k*k*k/3 + 2*k*k*k*k*k/15 + 17*k*k*k*k*k*k*k/315 + 69*k*k*k*k*k*k*k*k*k/2835 ; 
  cout << z; } }
           }
            else if (syst == 'R') 
            {
                 cout << "Enter Number:";
                double k;
                cin>>k;
                double p= k + k*k*k/3 + 2*k*k*k*k*k/15 + 17*k*k*k*k*k*k*k/315 + 69*k*k*k*k*k*k*k*k*k/2835 ; 
                cout << p;
            }
            else {cout << "Wrong Input";}
           }
            else if   (trigo =="Cot")
           { if(syst == 'D')
            {
                 cout << "Enter Number:";
                 int p;
                cin >> p;
                if(p>=360)
                {int d = p%360;
                switch (d){
                  case 0:
                  cout << "Not defined";
                  break;
                  case 180:
                  cout << "Not defined";
                  break;
                  default:
                  double k = (d*3.14159265359)/180;
             double z = k + k*k*k/3 + 2*k*k*k*k*k/15 + 17*k*k*k*k*k*k*k/315 + 69*k*k*k*k*k*k*k*k*k/2835 ;
             cout << 1/z;
                  
                  
                  }
                  }
             else { switch (p)
             {
                  case 0:
                  cout << "Not defined";
                  break;
                  case 180:
                  cout << "Not defined";
                  break;
                  default:
                  double k = (p*3.14159265359)/180;
             double z = k + k*k*k/3 + 2*k*k*k*k*k/15 + 17*k*k*k*k*k*k*k/315 + 69*k*k*k*k*k*k*k*k*k/2835 ;
             cout << 1/z;}
        
            }}
            else if (syst == 'R')
            { 
                cout << "Enter Number:";
                 double k;
                cin>>k;
                double z= k + k*k*k/3 + 2*k*k*k*k*k/15 + 17*k*k*k*k*k*k*k/315 + 69*k*k*k*k*k*k*k*k*k/2835 ;  
                if(z == 0)
               { cout << "Not defined";}
               else 
               {cout << 1/z;}
           }
           else {cout << "Wrong Input";}
           }
            else if   (trigo =="Cosec")
           { if(syst == 'D')
            { cout << "Enter Number:";
                int p;
                cin>> p;
                if(p>=360)
                {int d = p%360;
                switch(d){
                  case 0:
                  cout << "Not defined" ;
                  break;
                  case 180 :
                  cout << "Not defined" ;break;
                  default:
                  double k = (d*3.14159265359)/180;
                  double z= 
                  
           k - k*k*k/6 + k*k*k*k*k/120 - k*k*k*k*k*k*k*k/5040 + k*k*k*k*k*k*k*k*k/362880 - (k*k*k*k*k*k*k*k*k*k*k)/39916800 + k*k*k*k*k*k*k*k*k*k*k*k*k/6227020800;                cout << 1/z;
                  }
                  }
                else { switch (p){
                  case 0:
                  cout << "Not defined" ;
                  break;
                  case 180 :
                  cout << "Not defined" ;
                  break;
                  default:
                  double k = (p*3.14159265359)/180;
                  double z= 
                  
           k - k*k*k/6 + k*k*k*k*k/120 - k*k*k*k*k*k*k*k/5040 + k*k*k*k*k*k*k*k*k/362880 - (k*k*k*k*k*k*k*k*k*k*k)/39916800 + k*k*k*k*k*k*k*k*k*k*k*k*k/6227020800;                cout << 1/z;
                  }
           
            }
            }
            else if (syst == 'R')
            {
                 cout << "Enter Number:";
                 double k;
                cin>>k;
                double z = k - k*k*k/6 + k*k*k*k*k/120 - k*k*k*k*k*k*k*k/5040 + k*k*k*k*k*k*k*k*k/362880 - (k*k*k*k*k*k*k*k*k*k*k)/39916800 + k*k*k*k*k*k*k*k*k*k*k*k*k/6227020800;  
                if(k==0)
                {cout << "Not defined";}
                else {cout << 1/z;}
            }
            else {cout << "Wrong Input";}
           }
            else if (trigo =="Sec")
           { if(syst == 'D')
           { cout << "Enter Number:";
           int p;
                cin>> p;
                if(p>=360)
                {int d = p%360;
                switch (d)
                {
                  case 90:
                  cout << "Not defined";
                  break;
                  case 270:
                  cout << "Not defined";
                  break;
                  default:
                  
                 double k = (d*3.14159265359)/180;
                 double z = 1- k*k/2 + k*k*k*k/24 - k*k*k*k*k*k/720 + k*k*k*k*k*k*k*k/40320;
                 cout << 1/z;    }}         
                 else{ switch (p)
                {
                  case 90:
                  cout << "Not defined";
                  break;
                  case 270:
                  cout << "Not defined";
                  break;
                  default:
                  
                 double k = (p*3.14159265359)/180;
                 double z = 1- k*k/2 + k*k*k*k/24 - k*k*k*k*k*k/720 + k*k*k*k*k*k*k*k/40320;
                 cout << z;    }
                

               
            }
           }
          else if (syst == 'R')
          {
                 cout << "Enter Number:";
                 double k;
                cin>>k;
                 double z = 1- k*k/2 + k*k*k*k/24 - k*k*k*k*k*k/720 + k*k*k*k*k*k*k*k/40320; 
                 cout << 1/z;
            }
            else {cout << "Wrong Input";}
           }
    }
            else 
            {cout << "Wrong Input";}
 return 0;
       }
