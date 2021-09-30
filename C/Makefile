CC= gcc
COMMON= -Wall -Wextra -Wfloat-equal -pedantic -std=c99 #-Werror
DEBUG= -g3
SANITIZE= $(COMMON) -fsanitize=undefined -fsanitize=address $(DEBUG)
VALGRIND= $(COMMON) $(DEBUG)
PRODUCTION= $(COMMON) -O3
LDLIBS= -lm
CFLAGS= $(COMMON)

# -CC=gcc sets the complier
# -CFLAGS=... = sets the flags to compile with

# COMMON:
# -Wall = Switch on all warnings
# -Wextra = Even more warnings
# -Werror = Don't let me compile the program if there are any warnings
# -pedantic = issues warnings about certain forbidden behaviours
# -std=c99

#DEBUG:
# -g3 = provide the maximum amount of debugging information 

# SANITIZE:
# -O3 = Speed up the code as much as possible

# LDLIBS
# -lm = maths - lets you use pow() etc but you still have to #include <math.h>
