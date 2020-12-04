#include <iostream>
#include <cmath>
#include <cstring>
Ø§Ù„Ø§Ø³Ù… : Ø¹ØµØ§Ù… Ø§Ù„Ø¯ÙŠÙ† Ù…Ø­Ù…Ø¯ Ø§Ø­Ù…Ø¯ Ù…Ø¶ÙˆÙŠ 
                 Ø§Ù„Ù…Ø³ØªÙˆÙŠ :    Ø§Ù„Ø«Ø§Ù†ÙŠ                   
                 Ø§Ù„Ù‚Ø³Ù… :     Ø­Ø§Ø³ÙˆØ¨


using namespace std;     \\  Ù‡Ù†Ø§ Ù‚Ù…Ù†Ø§ Ø¨ØªØ¹Ø±ÙŠÙ Ø¯Ø§Ù„Ø© std 


class shape                ///shapeÙ‡Ù†Ø§ Ù‚Ù…Ù†Ø§ Ø¨ØªØ¹Ø±ÙŠÙ ÙƒÙ„Ø§Ø³ Ø§Ø³Ù…Ù‡            
{
    public:
    	int r1 ,r2 , d ,n ;
        double Re , cont , area ;
        double const pi= 3.14 ;
    	         
};

class ellipse : public shape            //  A ÙˆÙŠØ­ØªÙˆÙŠ Ø¹Ù„ÙŠ Ø¯Ø§Ù„Ø© Ø§Ø³Ù…Ù‡  shape  Ø¨ÙŠØ±Ø« Ù…Ù† ellipseÙ‡Ù†Ø§ Ù‚Ù…Ù†Ø§ Ø¨ØªØ¹Ø±ÙŠÙ ÙƒÙ„Ø§Ø³ Ø§Ø³Ù…Ù‡
{
    public:
        void printA ()            
        { 
             cout << "ellipse ----------- \n";
             cout<<"Enter d, Re";
             cin >> d>>Re    ;
             cont= 2*pi*d+Re/2 ;
             area= pi * Re*Re ;
             cout <<"cont =   "<< cont ;
             cout << "area =    "<< area ;

        }  
};
class circle : public ellipse           // BÙˆØ§Ù†Ø´Ø§Ø¯Ø§Ù„Ø© Ø§Ø³Ù…Ù‡ ellipseØ¨ÙŠØ±Ø« Ù…Ù† Ø§Ù„ÙƒÙ„Ø§Ø³  circle Ù‡Ù†Ø§ Ù‚Ù…Ù†Ø§ Ø¨ØªØ±ÙŠÙ ÙƒÙ„Ø§Ø³ Ø§Ø³Ù…Ù‡
{
    public:
        void printB() 
        {  
            cout << "circle ----------- \n";
            cont =d*Re ;
            area =d*Re*Re ;
            cout <<"cont circle =  "<< cont ;
            cout <<"area circle =   "<< area ;
        }
};
class polygon : public circle             // C Ù‚Ù…Ù†Ø§ Ø¨ØªØ¹Ø±ÙŠÙ Ø¯Ø§Ù„Ø© Ø§Ø³Ù…Ù‡Ø§ circle Ø¨ÙŠØ±Ø« Ù…Ù† Ø§Ù„ÙƒÙ„Ø§Ø³ polygon Ù‚Ù…Ù†Ø§ Ø¨ØªØ¹Ø±ÙŠÙ ÙƒÙ„Ø§Ø³ Ø§Ø³Ù…Ù‡
{
    public :
        void printC() 
        {  
            cout << "polygon ----------- \n";
            cout<<"Enter n, r1, r2";
            cin >> n  >>r1  >>r2 ;
            cont  = r2 * r1 ;
            area = n/2 ;
            cout << "cont polygon =   "<< cont ;
            cout << "area polygon =    "<< area ;
        }
};
class triangle : public polygon             //DÙˆÙ‚Ù…Ù†Ø§ Ø¨ØªØ¹Ø±ÙŠÙ Ø¯Ø§Ù„Ø© Ø§Ø³Ù…Ù‡Ø§  polygon ÙˆØ¨ÙŠØ±Ø« Ù…Ù† Ø§Ù„ÙƒÙ„Ø§Ø³ triangleÙ‚Ù…Ù†Ø§ Ø¨ØªØ¹Ø±ÙŠÙ ÙƒÙ„Ø§Ø³ Ø§Ø³Ù…Ù‡ 
{
    public :
        void printD()  
        { 
             cout << "triangle ----------- \n";
             cont = r1+r2+n ;
             area = r1 * r2 /2 ;
             cout << "cont triangle =    " << cont ;
             cout << "area triangle =    " << area ;
        }
};
class rectangle : public triangle// F ÙˆÙ‚Ù…Ù†Ø§ Ø¨ØªØ¹Ø±ÙŠÙ Ø¯Ø§Ù„Ø© Ø§Ø³Ù…Ù‡Ø§ triangle Ø¨ÙŠØ±Ø« Ù…Ù† Ø§Ù„ÙƒÙ„Ø§Ø³  rectangle Ù‚Ù…Ù†Ø§ Ø¨ØªØ¹Ø±ÙŠÙ ÙƒÙ„Ø§Ø³ Ø§Ø³Ù…Ù‡ 
{
    public :
        void printF()
        { 
             cout << "rectangle ----------- \n";
             cont = 2*r1+2*r2 ;
             area = r2 *r1 ;
             cout << "cont rectangle =    "<< cont ;
             cout << "area rectangle =    " << area ;
        }
};
class square : public rectangle  //GÙ‚Ù…Ù†Ø§ Ø¨ØªØ¹Ø±ÙŠÙ Ø¯Ø§Ù„Ø© Ø§Ø³Ù…Ù‡  rectangle Ø¨ÙŠØ±Ø« Ù…Ù† ÙƒÙ„Ø§Ø³ squareÙ‚Ù…Ù†Ø§ Ø¨ØªØ¹Ø±ÙŠÙ ÙƒÙ„Ø§Ø³ Ø§Ø³Ù…Ù‡ 
{
    public :
        void printG()
        {  
            cout << "square ----------- \n";
            cont = 4*r1 ;
            area = r1 * r1 ;
            cout << "cont square =    " << cont ;
            cout << "area square =     "<< area ;
        }
};
int main()
{
    square sel;
    char shell;
    cout<<"Please select your shape: ";
    cin>>shell;
    if(shell=='T'){
    	sel.printA();
	}else if(shell=='H'){
		sel.printB();
	}else if(shell=='J'){
		sel.printC();
	}else if(shell=='I'){
		sel.printD();
	}else if(shell=='K'){
		sel.printF();
	}else if(shell=='M'){
		sel.printG();
	}else {
		cout<<"Error, not defind";
	}
    
    
    return 0;
}
