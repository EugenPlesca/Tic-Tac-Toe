# 🎮 Tic-Tac-Toe

Tic-Tac-Toe realizat în cadrul **Laboratorului 2** pentru C++.  
Joc clasic pentru doi jucători, X și O, cu afișare în consolă.

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

## ⚙️ Compilare manuală

Deschide Command Prompt în folderul proiectului și rulează:

```cmd
g++ board.cpp game_engine.cpp painter.cpp main.cpp -o Tic-Tac-Toe.exe
