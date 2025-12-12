🎮 Tic-Tac-Toe – Laborator 5

Tic-Tac-Toe realizat în cadrul Laboratorului 5 pentru C++.
Joc clasic pentru doi jucători, X și O, cu afișare în consolă, extins pentru a utiliza biblioteci de programare, STL, smart pointers și fluxuri de intrare/ieșire.

1. Denumirea proiectului

Tic Tac Toe (X și O)

2. Ce reprezintă proiectul

Proiectul este o implementare a jocului clasic Tic Tac Toe (X și O), pe o tablă 3x3, realizată în C++ modern. Aplicația rulează în consolă și este structurată modular, folosind biblioteci de programare pentru separarea claselor de date de logica aplicației.

3. Modificări față de laboratorul anterior

Separarea claselor ce reprezintă datele (Board, Player, Point) într-o bibliotecă statică.
Crearea bibliotecii statice libcore.a utilizată de aplicația principală.
Rescrierea fișierului de construire pentru a compila și lega biblioteca statică.
Utilizarea containerelor STL (std::vector).
Utilizarea smart pointerilor (std::shared_ptr).
Folosirea fluxurilor de intrare/ieșire (std::cin, std::cout, std::ofstream).
Utilizarea algoritmilor STL (std::all_of) pentru verificarea câștigătorului.

4. Regulile jocului

Jocul se desfășoară pe o tablă 3x3.
Participă doi jucători: unul joacă cu X, celălalt cu O.
Jucătorii efectuează mutări pe rând, plasând simbolul într-o celulă liberă.
Jocul se încheie atunci când:
un jucător aliniază 3 simboluri pe o linie, coloană sau diagonală și câștigă;
toate celulele sunt ocupate și nu există câștigător, rezultatul fiind remiză.

🧱 Structura proiectului

libs/core – bibliotecă statică ce conține clasele de date
board.hpp / board.cpp – gestionarea tablei de joc
player.hpp – definirea jucătorilor (X, O, None)
point.hpp – structură pentru coordonate

src – codul aplicației principale
game_engine.hpp / game_engine.cpp – logica jocului și rularea partidei
painter.hpp / painter.cpp – afișarea tablei și a rezultatului
main.cpp – punctul de intrare în aplicație

build.cmd – script pentru compilarea aplicației folosind biblioteca statică
.gitignore – ignorarea fișierelor obiect și executabile
