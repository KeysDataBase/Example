#include <iostream>
#include <windows.h>
#include "DataKeys.h"

#pragma comment( lib, "DataKeys_Release_MD_x64.lib" )

int main()
{
    server::init();
    
    auto id = server::get_id();

    printf("Your id: %d\n", id);

    auto status = server::check_user();

    if (status)
    {
        printf("\nSuccess :)\n");
        Sleep(-1);
    }

    std::string key;

    printf("Key: ");

    std::cin >> key;

    auto status2 = server::login(key);

    if (status2)
        printf("\nSuccess :)");
    else
        printf("\nError :(");

    Sleep(-1);
}
