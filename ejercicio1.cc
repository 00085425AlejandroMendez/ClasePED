#include <iostream>
#include <vector>

struct Singer
{
    std::string name;
    std::string nationality;
};

struct Album
{
    std::string title;
    int release_year;
    int age;
    std::vector<std::pair<int, std::string>> songs;
    Singer singer;
};

void createAlbum(Album &album)
{
    Singer singer;

    std::cout << "Ingrese el nombre del artista: ";
    std::cin >> singer.name;

    std::cout << "Ingrese la nacionalidad del artista: ";
    std::cin >> singer.nationality;

    album.singer = singer;

    std::cout << "Ingrese el titulo del album: ";
    std::cin >> album.title;

    std::cout << "Ingrese la fecha de lanzamiento del album: ";
    std::cin >> album.release_year;
    album.age = 2025 - album.release_year;

    std::cout << "Ingrese la cantidad de canciones: ";
    int cantidad_canciones;
    std::cin >> cantidad_canciones;

    for (int i = 0; i < cantidad_canciones; i++)
    {

        std::cout << "Ingrese el titulo de la cancion: ";
        std::string titulo;
        std::cin >> titulo;

        album.songs.push_back(std::make_pair(i, titulo));
    }

    return;
};



int main()
{

    Album album;
    createAlbum(album); 

    return 0;
}
