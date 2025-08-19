#include <iostream>
#include <string>
#include <ctime>

std::string GenerarCupon()
{
    std::string prefix;

    do
    {
        std::cout << "Ingrese el prefijo para el cupon (max 3 caracteres): " << std::endl;
        std::cin >> prefix;

        if (prefix.length() > 3)
        {
            std::cout << "El prefijo no puede tener mas de 3 caracteres." << std::endl;
        }
    } while (prefix.length() == 0 || prefix.length() > 3);

    int numero = 100 + rand() % 900; // siempre 3 dígitos
    return prefix + std::to_string(numero);
}

bool VerificarCupon(std::string cupon)
{
    int num = std::stoi(cupon.substr(3, 5));

    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

    return false;
}

int main()
{
    srand(time(0));
    std::string cupon;

    cupon = GenerarCupon();

    std::cout << "Cupon generado: " << std::endl;
    std::cout << cupon << std::endl;

    if (VerificarCupon(cupon))
    {
        std::cout << "El cupon es valido" << std::endl;
    }
    else
    {
        std::cout << "El cupon no es valido" << std::endl;
    }

    return 0;
}
