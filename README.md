# Calculatrice en C

Ce projet contient unebpetite calculatrice codée en C.  
Le projet est organisé en deux branches Git :  

- **master** : compilation manuelle avec GCC  
- **compilation_make** : compilation automatisée avec Makefile

---

## Fichiers du projet

- `main.c` : programme principal, interface avec l’utilisateur  
- `functions.c` : fonctions de calcul (`add`, `sub`, `mul`, `divi`)  
- `functions.h` : déclaration des fonctions  
- `Makefile` : script pour automatiser la compilation (branche `compilation_make`)  

---

## Compilation et exécution

### Branche `master` (compilation manuelle)
```bash
git checkout master
gcc -c functions.c -o functions.o
gcc -c main.c -o main.o
gcc functions.o main.o -o calculatrice
./calculatrice
