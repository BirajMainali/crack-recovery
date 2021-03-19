#include <stdio.h>
#include<windows.h>
#include <conio.h>
#include<time.h>

void main()
{
    Dashboard();
}
int Animation()
{
    int count = 1;
    system ( "cls" );

    for ( count; count < 101; count++ ) {
        if ( count )
            printf ( "\t\t\t\t\tWork in Progress, %d file has been Recovered", count );
        else
            if ( count < 100 )
                printf ( "\t\t\t\t\tProgress, %d + file has been Recovered", count );

        system ( "cls" );
    }

    return 0;
};
int ExitControll()
{
    int Controll;
    system ( "cls" );
    printf ( "\t\t\t\t\nsuccessfully Task Completed Exit [1], Home [2]\n\n\n" );
    printf ( ">_ " );
    scanf ( "%d", Controll );

    if ( Controll == 2 )
        Dashboard();
    else
        system ( "Exit" );
};
int Dashboard()
{
    int _path;
    system ( "color a" );
    system ( "cls" );
    system ( "cls" );
    time_t t;
    time ( & t );
    printf ( "Date: %s", ctime ( & t ) );
    printf ( "\t\t\t\t\tWELCOME TO CRUDKAT PEN RECOVERY \n\n\n" );
    printf ( "> Step's\n\n" );
    printf ( "1. Keep an erased Pendrive on your computer. \n" );
    printf ( "2. Copy the Pendrive path F: \n\n\n\n\n\n" );
    printf ( "\t\t\t\t\t\t  </ BEGIN ! > \n\n\n" );
    printf ( "\t\t\tPlease Choose Disk Path \n\n" );
    printf ( "\t\t\t1. F:\n" );
    printf ( "\t\t\t2. E:\n" );
    printf ( "\t\t\t3. D:\n" );
    printf ( "\t\t\t4. C:\n\n" );
    printf ( "\t\t\t>_ " );
    scanf ( "%d", & _path );
    system ( "cls" );

    switch ( _path ) {
    case 1:
        system ( "cd F:" );
        system ( "attrib -h -r -s /s /d *.*" );
        Animation();
        break;

    case 2:
        system ( "cd E:" );
        system ( "attrib -h -r -s /s /d *.*" );
        Animation();
        ExitControll();
        break;

    case 3:
        system ( "cd D:" );
        system ( "attrib -h -r -s /s /d *.*" );
        Animation();
        ExitControll();
        break;

    case 4:
        system ( "cd C:" );
        system ( "attrib -h -r -s /s /d *.*" );
        Animation();
        ExitControll();
        break;

    default:
        printf ( "Warning ! Disk Not Found !" );
        ExitControll();
        break;
    }

    getch();
};
