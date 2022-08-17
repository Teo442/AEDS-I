/*
 Guia0112 - v0.0. - 14 / 08 / 2022
 **
     * @author Pedro Teodoro
     * @matricula 761737
     *
 Para compilar em uma janela de comandos (terminal):

 No Linux : g++ -o Guia0112 ./Guia0112.cpp
 No Windows: g++ -o Guia0112.exe Guia0112.cpp

 Para executar em uma janela de comandos (terminal):

 No Linux : ./Guia0112
 No Windows: Guia0112

*/

#include "karel.hpp" 

void decorateWorld ( const char* fileName ) {
    world->set ( 4, 4, HWALL ); 
    world->set ( 4, 4, VWALL ); 
    world->set ( 3, 3, BEEPER );
    world->set ( 3, 6, BEEPER );
    world->set ( 6, 6, BEEPER );
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

        moveN( 5 );
        turnLeft( );
        moveN( 5 );
        pickBeeper( );
        turnLeft( );
        moveN( 3 );
        pickBeeper( );
        turnLeft( );
        moveN( 3 );
        pickBeeper( );
        moveN ( 2 );
        turnRight( );
        moveN( 2 );
        turnRight( );
        turnRight( );

        turnOff ( );

    } 
}; 

int main ( ) {

    world->create ( "" ); 
    decorateWorld ( "Guia0112.txt" );
    world->show ( );
    world->reset ( ); 
    world->read ( "Guia0112.txt" );
    world->show ( ); 
    set_Speed ( 3 ); 
    MyRobot *robot = new MyRobot( );
    robot->create ( 1, 1, EAST, 0, "Karel" );
    robot->doTask ( );
    world->close ( );
    getchar ( );

    return ( 0 ); 
} 