# 🎮 Tic-Tac-Toe

Tic-Tac-Toe realizat în cadrul **Laboratorului 2** pentru C++.  
Joc clasic pentru doi jucători, X și O, cu afișare în consolă.

---

## 1. Denumirea proiectului
Tic Tac Toe (X și O)

## 2. Ce reprezintă proiectul
Proiectul este o implementare simplă a jocului clasic Tic Tac Toe (X și O), jucat pe o tablă 3x3.

## 3. Regulile jocului
Jocul se joacă pe o tablă 3x3.  
Doi jucători participă: unul joacă cu X, celălalt cu O.  
Jucătorii fac mutări pe rând, plasând X sau O într-o celulă liberă.  
Jocul se termină atunci când:  
- unul dintre jucători are 3 simboluri consecutive pe o linie, coloană sau diagonală → câștigă;  
- toate celulele sunt ocupate și nu există câștigător → remiză.

---

## 🧱 Structura proiectului

- `board.hpp` / `board.cpp` – gestionarea tablei de joc  
- `game_engine.hpp` / `game_engine.cpp` – logica jocului  
- `painter.hpp` / `painter.cpp` – afișarea tablei și câștigătorului  
- `player.hpp` – definirea jucătorilor (X, O, None)  
- `point.hpp` – structura pentru coordonate  
- `main.cpp` – punctul de intrare în joc  
- `build.cmd` – script pentru compilare rapidă  
- `.gitignore` – ignoră fișierele obiect și executabile  

---