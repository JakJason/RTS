#ifndef NETWORK_OPCODES_HPP_INCLUDED
#define NETWORK_OPCODES_HPP_INCLUDED

//ID - oznacza, że operacja dotyczy obiektu w aktualnej grze
//LISTA - oznacza, że operacja dotyczy nowego obiektu(dopiero do dodania do aktualnej gry)
enum OPCODES : sf::Uint8
{

    UNUSED,

    MOVE_UNIT,//przesunięcie jednostki
//<ID_jednostki><pozycja_x><pozycja_y>

    ATTACK,//atakuj
//<ID_jednostki_naszej><ID_jedostki_atakowanej>

    CREATE_UNIT,//stwórz jednostkę
//<ID_budynku_z_którego_budujemy><LISTA_jednostki>

    CREATE_BUILDING,//wybudowanie budynku
//<LISTA_budynku><pozycja_x><pozycja_y>

    ADD_UNIT_TO_GAME,//dodaj jednostke do gry
//<LISTA_jednostki><pozycja_x><pozycja_y>

    SET_UNIT_POSITION,//zmien pozycje jednostki
//<ID_jednostki><pozycja_x><pozycja_y>

};

#endif // NETWORK_OPCODES_HPP_INCLUDED
