🎮 Tic-Tac-Toe – Laborator 6

Tic-Tac-Toe realizat în cadrul Laboratorului 6 pentru C++.
Lucrarea se bazează pe laboratoarele anterioare și adaugă documentație, teste unitare și actualizarea procesului de construire.

1. Descrierea proiectului

Aplicația este o implementare a jocului clasic Tic-Tac-Toe (X și O), realizată în C++ modern. Proiectul este structurat modular și utilizează biblioteci statice, documentație automată și teste pentru clasele de date.

2. Regulile jocului

Jocul se desfășoară pe o tablă 3x3.
Doi jucători (X și O) mută pe rând.
Jocul se termină atunci când un jucător aliniază 3 simboluri sau când tabla este completă (remiză).

3. Dependențe

Sistem de operare: Windows

Compilator: g++ (MinGW / GCC)

Standard C++: C++17

Biblioteci utilizate:

STL (vector, algorithm, memory, fstream)

Bibliotecă statică proprie libcore.a

4. Construirea aplicației

Aplicația se compilează folosind scriptul build.cmd.
Scriptul construiește biblioteca statică, aplicația principală și rulează testele unitare.

5. Testare

Directorul tests conține teste pentru clasele ce reprezintă datele.
Testele verifică validitatea mutărilor și starea tablei de joc.
