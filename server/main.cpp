#include "engine.hpp"

Server_Engine engine;

int main()
{
    engine.init();
    //engine.debug_show_size();

    while( engine.get_lobby_loop() )
    {
        engine.receive_packets();
        engine.lobby_logic();
        engine.send_packets();
        while( engine.get_game_loop() )
        {
            engine.receive_packets();
            engine.game_logic();
            engine.send_packets();
        }
    }

    return EXIT_SUCCESS;
}
