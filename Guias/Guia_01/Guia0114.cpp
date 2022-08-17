/*
 Guia0114- v0.0. - 14 / 08 / 2022
 **
     * @author Pedro Teodoro
     * @matricula 761737
     *
 Para compilar em uma janela de comandos (terminal):

 No Linux : g++ -o Guia0114 ./Guia0114.cpp
 No Windows: g++ -o Guia0114.exe Guia0114.cpp

 Para executar em uma janela de comandos (terminal):

 No Linux : ./Guia0114
 No Windows: Guia0114

*/

#include "karel.hpp" 

void decorateWorld ( const char* fileName ) {
    world->set ( 3, 2, HWALL ); 
    world->set ( 4, 2, HWALL ); 
    world->set ( 5, 2, HWALL ); 
    world->set ( 3, 6, HWALL ); 
    world->set ( 4, 6, HWALL ); 
    world->set ( 5, 6, HWALL ); 
    world->set ( 2, 3, VWALL ); 
    world->set ( 2, 4, VWALL );
    world->set ( 2, 5, VWALL );
    world->set ( 2, 6, VWALL );
    world->set ( 5, 3, VWALL );
    world->set ( 5, 4, VWALL );
    world->set ( 5, 5, VWALL );
    world->set ( 2, 6, BEEPER );
    world->set ( 5, 7, BEEPER );
    world->set ( 6, 3, BEEPER );
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

    void buscarBeeper ( ) {
        moveN( 5 );
        turnLeft( );
        moveN( 2 );
        pickBeeper( );
        moveN( 4 );
        turnLeft( );
        moveN( 1 );
        pickBeeper( );
        moveN( 3 );
        turnLeft( );
        moveN( 1 );
        pickBeeper( );
    }

    void colocarBeeper ( ){
        turnLeft( );
        turnLeft( );
        moveN( 1 );
        turnRight( );
        moveN( 4 );
        turnRight( );
        moveN( 1 );
        turnRight( );
        moveN( 2 );
        turnLeft( );
        moveN( 3 );
        putBeeper( );
        putBeeper( );
        putBeeper( );
    }

    void voltarPosInicial ( ){
        turnLeft( );
        turnLeft( );
        moveN( 3 );
        turnRight( );
        moveN( 2 );
        turnRight( );
        moveN( 5 );
        turnRight( );
        moveN( 5 );
        turnLeft( );
        turnLeft( );
    }

    void doTask( ) {
        buscarBeeper( );
        colocarBeeper( );
        voltarPosInicial( );

        turnOff ( );

    } 
}; 

int main ( ) {

    world->create ( "" ); 
    decorateWorld ( "Guia0114.txt" );
    world->show ( );
    world->reset ( ); 
    world->read ( "Guia0114.txt" );
    world->show ( ); 
    set_Speed ( 3 ); 
    MyRobot *robot = new MyRobot( );
    robot->create ( 1, 1, EAST, 0, "Karel" );
    robot->doTask ( );
    world->close ( );
    getchar ( );

    return ( 0 ); 
} 