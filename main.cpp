

#include <iostream>
#include "Classes.h" //A classes azaz az oszt�lyokat tartalmaz� fejl�c, most csak egy van mert nincs sok oszt�ly, ha sok lesz akkor t�bb header-be lesz bontva



int main()
{


    // A k�t p�lda karakter l�trehoz�sa az oszt�lyban megadott konstruktor alapj�n Param�terek: N�v, �let, �t�s er�
    Characters A("Maple",150,10);
    Characters B("Sally",45,30);

    /*Characters A;
    Characters B;
    std::cout << "create player 1\n";
    A.Create();
    std::cout << "create player 2\n";                       //   Tesztel�sn�l haszn�lt karakter l�trehoz�shoz sz�ks�ges k�dr�sz. Ha nem a p�lda adatokat haszn�ljuk hanem saj�t karaktereket akarunk l�trehozni. Nem a feladat szoros r�sze csak a jobb tesztel�s miatt kellett.     
    B.Create();
    std::cout << "player 1: ";
    A.toString();
    std::cout << "player 2: ";
    B.toString();*/
    Game NewGame(A, B); //A j�t�k oszt�ly p�ld�nya "elind�t" egy �j j�t�kot A �s B karakterrel. A karakterek sorrendje nem fontos mert az alap feladatot kieg�sz�tett�k azzal, hogy a fut�sn�l v�lasztani lehet hogy melyik karakter kezdje az �t�st.
    NewGame.Fight();    //Elind�tja a j�t�k Fight met�dus�t( A �s B karakter felv�tolt �t�se)

    return 0;
}

