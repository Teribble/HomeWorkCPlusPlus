#include "Helper.h"

int main()
{
    WindowsSize;
    deleteCursor();
    srand( time( NULL ) );
    printTree();
        while(true)
        {
            int rand = getRandomNumber( 6 , 7 );
            int time = getRandomNumber( 50 , 250 );
            Sleep( time );
            for(int i = 1; i < ChristmasTreeHeight; i++)
            {
                garland( i );
                
            }
            if(rand == 6)
            {
                setCursor( 3 , 14 );
                std::cout << "Heppy New Years";
            }
            else
            {
                setCursor( 3 , 14 );
                std::cout << "               ";
            }
        }
    system( "pause" );
    return 0;
}
//9 - 12