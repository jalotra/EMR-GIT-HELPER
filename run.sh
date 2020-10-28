
g++ -c "src/matrix_multiplication.cpp" -std=c++17 -Wshadow -Wall -o "matrix_multiplication.o"  -g  -D_GLIBCXX_DEBUG
g++ -c "tests/tests.cpp" -std=c++17 -Wshadow -Wall -o "tests.o"  -g  -D_GLIBCXX_DEBUG
g++ -o main "tests.o" "matrix_multiplication.o"
