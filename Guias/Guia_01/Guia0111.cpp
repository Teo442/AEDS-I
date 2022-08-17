/*
 Guia0111 - v0.0. - 12 / 08 / 2022
 **
     * @author Pedro Teodoro
     * @matricula 761737
     *
 Para compilar em uma janela de comandos (terminal):

 No Linux : g++ -o Guia0111 ./Guia0111.cpp
 No Windows: g++ -o Guia0111.exe Guia0111.cpp

 Para executar em uma janela de comandos (terminal):

 No Linux : ./Guia0111
 No Windows: Guia0111

*/

#include "karel.hpp" 

void decorateWorld ( const char* fileName ) {
    world->set ( 4, 4, HWALL ); 
    world->set ( 4, 4, VWALL ); 
    world->set ( 4, 4, BEEPER );
    world->save( fileName );
}

class MyRobot : public Robot {
    public:

    void turnRight ( ) {

        if ( checkStatus ( ) ) {
            turnLeft ( );
            turnLeft ( );
            turnLeft ( );
        } 
    } 

    void moveN( int steps ) {
 
        int step = 0;
 
        for ( step = 1; step <= steps; step = step + 1 ) {
            move( );
        } 
    } 

    void doTask( ) {

        moveN( 2 );
        turnLeft( );
        moveN( 2 );
        putBeeper( );
        moveN( 3 );
        putBeeper( );
        turnRight( );
        moveN( 3 );
        putBeeper( );
        turnRight( );
        moveN( 5 );
        turnRight( );
        moveN( 5 );
        turnLeft ( );
        turnLeft ( );

        turnOff ( );

    } 
}; 

int main ( ) {

    world->create ( "" ); 
    decorateWorld ( "Guia0111.txt" );
    world->show ( );
    world->reset ( ); 
    world->read ( "Guia0111.txt" );
    world->show ( ); 
    set_Speed ( 3 ); 
    MyRobot *robot = new MyRobot( );
    robot->create ( 1, 1, EAST, 3, "Karel" );
    robot->doTask ( );
    world->close ( );
    getchar ( );

    return ( 0 ); 
} 