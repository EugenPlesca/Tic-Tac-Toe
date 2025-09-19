# Tic-Tac-Toe
1. Denumirea proiectului

Tic Tac Toe (X și O)

2. Ce reprezintă proiectul

Proiectul este o implementare simplă a jocului clasic Tic Tac Toe (X și O), jucat pe o tablă 3x3.

3. Regulile jocului

Jocul se joacă pe o tablă 3x3.

Doi jucători participă: unul joacă cu X, celălalt cu O.

Jucătorii fac mutări pe rând, plasând X sau O într-o celulă liberă.

Jocul se termină atunci când:

unul dintre jucători are 3 simboluri consecutive pe o linie, coloană sau diagonală → câștigă;

toate celulele sunt ocupate și nu există câștigător → remiză.

4. Tipuri de date noi declarate

struct Point – reprezintă coordonatele unei celule din tablă (x, y).

enum class Player – definește jucătorii: None, X, O.

class Board – reprezintă tabla de joc 3x3, reține mutările și verifică starea celulelor.

class GameEngine – gestionează logica jocului (inițializare, rulare, verificarea câștigătorului).

class Painter – responsabil cu afișarea tablei de joc și a rezultatului (textual sau grafic).