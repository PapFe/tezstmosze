

#include <iostream>
#include "Classes.h" //A classes azaz az osztályokat tartalmazó fejléc, most csak egy van mert nincs sok osztály, ha sok lesz akkor több header-be lesz bontva



int main()
{


    // A két példa karakter létrehozása az osztályban megadott konstruktor alapján Paraméterek: Név, Élet, Ütés erõ
    Characters A("Maple",150,10);
    Characters B("Sally",45,30);

    /*Characters A;
    Characters B;
    std::cout << "create player 1\n";
    A.Create();
    std::cout << "create player 2\n";                       //   Tesztelésnél használt karakter létrehozáshoz szükséges kódrész. Ha nem a példa adatokat használjuk hanem saját karaktereket akarunk létrehozni. Nem a feladat szoros része csak a jobb tesztelés miatt kellett.     
    B.Create();
    std::cout << "player 1: ";
    A.toString();
    std::cout << "player 2: ";
    B.toString();*/
    Game NewGame(A, B); //A játék osztály példánya "elindít" egy új játékot A és B karakterrel. A karakterek sorrendje nem fontos mert az alap feladatot kiegészítettük azzal, hogy a futásnál választani lehet hogy melyik karakter kezdje az ütést.
    NewGame.Fight();    //Elindítja a játék Fight metódusát( A és B karakter felvátolt ütése)

    return 0;
}

