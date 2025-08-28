#include <iostream>
#include <vector>

struct Song
{
    int id;
    std::string title;
};

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
    std::vector<Song> songs;
    Singer singer;
};

void createAlbum()
{
 
};

int main()
{
    return 0;
}
