🎮 Tic-Tac-Toe – Laborator 4

Tic-Tac-Toe realizat în cadrul Laboratorului 4 pentru C++.
Joc clasic pentru doi jucători, X și O, cu afișare în consolă, rescris pentru a folosi STL, smart pointers și fluxuri de intrare/ieșire.

1. Denumirea proiectului

Tic Tac Toe (X și O)

2. Ce reprezintă proiectul

Proiectul este o implementare simplă a jocului clasic Tic Tac Toe (X și O), pe o tablă 3x3, cu cod modernizat pentru C++ (STL, smart pointers, fluxuri).

3. Modificări față de laboratorul anterior

Înlocuirea vectorilor cu containere STL (std::array sau std::vector)

Înlocuirea pointerilor bruti cu std::shared_ptr

Folosirea fluxurilor de intrare/ieșire (std::cin, std::cout, std::ofstream)

Înlocuirea șirurilor de caractere cu std::string

Utilizarea algoritmilor STL (std::all_of) pentru verificarea câștigătorului

4. Regulile jocului

Jocul se joacă pe o tablă 3x3.
Doi jucători participă: unul joacă cu X, celălalt cu O.
Jucătorii fac mutări pe rând, plasând X sau O într-o celulă liberă.
Jocul se termină atunci când:

unul dintre jucători are 3 simboluri consecutive pe o linie, coloană sau diagonală → câștigă;

toate celulele sunt ocupate și nu există câștigător → remiză.

🧱 Structura proiectului

board.hpp / board.cpp – gestionarea tablei de joc

game_engine.hpp / game_engine.cpp – logica jocului și rularea partidei

painter.hpp / painter.cpp – afișarea tablei și câștigătorului

player.hpp – definirea jucătorilor (X, O, None)

point.hpp – structura pentru coordonate

main.cpp – punctul de intrare în joc

build.cmd – script pentru compilare rapidă

.gitignore – ignoră fișierele obiect și executabile