#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include<time.h>
#define max 100

void MaximizeOutputWindow ( void );
void Homelicensekey ( char[] );
void HomeNlicensekey ( char[] );
void Professionallicensekey ( char[] );
void ProfessionalNlicensekey ( char[] );
void Educationlicensekey ( char[] );
void EducationNlicensekey ( char[] );
void Enterpriselicensekey ( char[] );
void EnterpriseNlicensekey ( char[] );
void HomeSingleLanguagelicensekey ( char[] );
void HomeCountrySpecific ( char[] );
void Quit();
void main()
{
    char _Home[max] = "TX9XD-98N7V-6WMQ6-BX7FG-H8Q99";
    char _Home_N[max] = "3KHY7-WNT83-DGQKR-F7HPR-844BM";
    char _Home_Single_Language[max] = "7HNRX-D7KGG-3K4RQ-4WPJ4-YTDFH";
    char _Home_Country_Specific[max] = "PVMJN-6DFY6-9CCP6-7BKTT-D3WVR";
    char _Professional[max] = "W269N-WFGWX-YVC9B-4J6C9-T83GX";
    char _Professional_N[max] = "MH37W-N47XK-V7XM9-C7227-GCQG9";
    char _Education[max] = "NW6C2-QMPVW-D7KKK-3GKT6-VCFB2";
    char _Education_N[max] = "2WH4N-8QGBV-H22JP-CT43Q-MDWWJ";
    char _Enterprise[max] = "NPPR9-FWDCX-D2C8J-H872K-2YT43";
    char _Enterprise_N[max] = "DPH2V-TTNVB-4X9Q3-TJR4H-KHJW4";
    int Get;
    //MaximizeOutputWindow();
    system ( "color 9" );
    system ( "cls" );
    printf ( "\n\t\t\t\t###################################################\t\t\t\n" );
    printf ( "\n\t\t\t\t * Welcome To Microsoft Windows Activation Center *\n" );
    printf ( "\n\t\t\t\t###################################################\t\t\t\n\n\n\n" );
    printf ( "\t\t\t\t  Windows 10 Edition(s) >_ \n\n\n" );
    printf ( "\t\t\t\t  [0] Home\n" );
    printf ( "\t\t\t\t  [1] Home N\n" );
    printf ( "\t\t\t\t  [2] Professional\n" );
    printf ( "\t\t\t\t  [3] Professional N\n" );
    printf ( "\t\t\t\t  [4] Education\n" );
    printf ( "\t\t\t\t  [5] Education N\n" );
    printf ( "\t\t\t\t  [6] Enterprise\n" );
    printf ( "\t\t\t\t  [7] Enterprise N\n" );
    printf ( "\t\t\t\t  [8] Home Single Language\n" );
    printf ( "\t\t\t\t  [9] Home Country Specific\n" );
    printf ( "\t\t\t\t  [*] Let Me Know my Edition\n\n\n" );
    printf ( "\t\t\t\t  Please Enter Your choice : " );
    scanf ( " %d", &Get );
    
    switch ( Get ) {
    case 0:
        Homelicensekey ( _Home );
        break;
        
    case 1:
        HomeNlicensekey ( _Home_N );
        break;
        
    case 2:
        Professionallicensekey ( _Professional );
        break;
        
    case 3:
        ProfessionalNlicensekey ( _Professional_N );
        break;
        
    case 4:
        Educationlicensekey ( _Education );
        break;
        
    case 5:
        EducationNlicensekey ( _Education_N );
        break;
        
    case 6:
        Enterpriselicensekey ( _Enterprise );
        break;
        
    case 7:
        EnterpriseNlicensekey ( _Enterprise_N );
        break;
        
    case 8:
        HomeSingleLanguagelicensekey ( _Home_Single_Language );
        break;
        
    case 9:
        HomeCountrySpecific ( _Home_Country_Specific );
        break;
        
    default:
        Quit();
        break;
    }
    
    getch ();
}
void Homelicensekey ( char x[max] )
{
    char indicator[max] = "slmgr /ipk ";
    strncat ( indicator, x, max );
    system ( indicator );
    system ( "slmgr /skms kms8.msguides.com" );
    system ( "slmgr /ato" );
    system ( "systeminfo" );
    sleep ( 2 );
    system ( "cls" );
    printf ( "Wait For System Result" );
    sleep (2);
    system ( "exit" );
}
void HomeNlicensekey ( char x[max] )
{
    char indicator[max] = "slmgr /ipk ";
    strncat ( indicator, x, max );
    system ( indicator );
    system ( "slmgr /skms kms8.msguides.com" );
    system ( "slmgr /ato" );
    system ( "systeminfo" );
    sleep ( 2 );
    printf ( "Wait For System Result" );
    sleep (2)
    system ( "exit" );
}
void Professionallicensekey ( char x[max] )
{
    char indicator[max] = "slmgr /ipk ";
    strncat ( indicator, x, max );
    system ( indicator );
    system ( "slmgr /skms kms8.msguides.com" );
    system ( "slmgr /ato" );
    system ( "systeminfo" );
    sleep ( 2 );
    printf ( "Wait For System Result" );
    sleep (2);
    system ( "exit" );
}
void ProfessionalNlicensekey ( char x[max] )
{
    char indicator[max] = "slmgr /ipk ";
    strncat ( indicator, x, max );
    system ( indicator );
    system ( "slmgr /skms kms8.msguides.com" );
    system ( "slmgr /ato" );
    system ( "systeminfo" );
    sleep ( 2 );
    system ( "cls" );
   printf ( "Wait For System Result" );
    sleep (2);
    system ( "exit" );
}
void Educationlicensekey ( char x[max] )
{
    char indicator[max] = "slmgr /ipk ";
    strncat ( indicator, x, max );
    system ( indicator );
    system ( "slmgr /skms kms8.msguides.com" );
    system ( "slmgr /ato" );
    system ( "systeminfo" );
    sleep ( 2 );
    system ( "cls" );
   printf ( "Wait For System Result" );
    sleep (2);
    system ( "exit" );
}
void EducationNlicensekey ( char x[max] )
{
    char indicator[max] = "slmgr /ipk ";
    strncat ( indicator, x, max );
    system ( indicator );
    system ( "slmgr /skms kms8.msguides.com" );
    system ( "slmgr /ato" );
    system ( "systeminfo" );
    sleep ( 2 );
    system ( "cls" );
    printf ( "Wait For System Result" );
    sleep (2);
    system ( "exit" );
}
void Enterpriselicensekey ( char x[max] )
{
    char indicator[max] = "slmgr /ipk ";
    strncat ( indicator, x, max );
    system ( indicator );
    system ( "slmgr /skms kms8.msguides.com" );
    system ( "slmgr /ato" );
    system ( "systeminfo" );
    sleep ( 2 );
    system ( "cls" );
    printf ( "Wait For System Result" );
    sleep (2);
    system ( "exit" );
}
void EnterpriseNlicensekey ( char x[max] )
{
    char indicator[max] = "slmgr /ipk ";
    strncat ( indicator, x, max );
    system ( indicator );
    system ( "slmgr /skms kms8.msguides.com" );
    system ( "slmgr /ato" );
    system ( "systeminfo" );
    sleep ( 2 );
    system ( "cls" );
    printf ( "Wait For System Result" );
    sleep (2);
    system ( "exit" );
}
void HomeSingleLanguagelicensekey ( char x[max] )
{
    char indicator[max] = "slmgr /ipk ";
    strncat ( indicator, x, max );
    system ( indicator );
    system ( "slmgr /skms kms8.msguides.com" );
    system ( "slmgr /ato" );
    system ( "systeminfo" );
    sleep ( 2 );
    system ( "cls" );
    printf ( "Wait For System Result" );
    sleep (2);
    system ( "exit" );
}
void HomeCountrySpecific ( char x[max] )
{
    char indicator[max] = "slmgr /ipk ";
    strncat ( indicator, x, max );
    system ( indicator );
    system ( "slmgr /skms kms8.msguides.com" );
    system ( "slmgr /ato" );
    system ( "systeminfo" );
    sleep ( 2 );
    system ( "cls" );
   printf ( "Wait For System Result" );
    sleep (2);
    system ( "exit" );
}
void Quit ()
{
    system ( "wmic os get caption" );
    sleep ( 500 );
    printf ( "\t\nI Think you have noted your Edition, we are Automatically moving to the main menu in 5 seconds" );
    sleep ( 500 );
    main();
}

void MaximizeOutputWindow ( void )
{
    HWND consoleWindow = GetConsoleWindow();
    ShowWindow ( consoleWindow, SW_MAXIMIZE );
}
