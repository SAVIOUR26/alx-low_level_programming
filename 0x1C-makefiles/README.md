# Makefile Practice: C Programming

This repository is dedicated to practicing the creation of Makefiles and working with C programs. It includes Makefiles for building an executable called "school" based on source files "school.c" and "main.c." The project also features a Python script for calculating the perimeter of an island in a grid.

## Contents

- [Tests](./tests): Contains test files.
- [school.c](./school.c): A C function that displays a seahorse in text. Used for Makefile practice throughout the project.
- [main.c](./main.c): The main C function that runs the functionality defined in "school.c."
- [m.h](./m.h): Header file defining the function prototype used in "school.c."

## Makefiles

1. **0-Makefile**
   - Creates an executable "school" based on "school.c" and "main.c."
   - Includes a "all" rule that builds the executable.

2. **1-Makefile**
   - Builds on "0-Makefile."
   - Defines a "CC" variable for the compiler and an "SRC" variable for source files.
   - The "all" rule only recompiles updated source files.

3. **2-Makefile**
   - Builds on "1-Makefile."
   - Defines an "OBJ" variable for object files and a "NAME" variable for the executable name.

4. **3-Makefile**
   - Builds on "2-Makefile."
   - Includes additional rules:
     - "clean" to delete temporary files and the executable.
     - "oclean" to delete object files.
     - "fclean" to delete temporary files, executable, and object files.
     - "re" to force recompilation of all source files.
   - Defines an "RM" variable for the command to delete files.

5. **4-Makefile**
   - Builds on "3-Makefile."
   - Defines a "CFLAGS" variable for compiler flags, including "-Wall -Werror -Wextra -pedantic."

6. **5-island_perimeter.py**
   - Contains a Python function for calculating the perimeter of an island in a grid.
   - The function "island_perimeter(grid)" takes a list of lists representing a grid with land and water cells.

7. **100-Makefile**
   - Builds on "4-Makefile."
   - Does not define the "RM" variable.
   - Does not use the string "$(CFLAGS)."
   - Ensures that the "m.h" header is present.
   - Works even if files with the same names as Makefile rules exist in the current directory.

Feel free to explore these Makefiles and the accompanying C and Python code for educational purposes. Happy coding! :rocket:
