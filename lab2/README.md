## Перед запуском потрібно налаштовувати шляхи:
export PATH=$PATH:/c/boost_1_85_0/stage/lib
export BOOST_LIBRARYDIR=/c/boost_1_85_0/stage/lib
export BOOST_ROOT=/c/boost_1_85_0
export LD_LIBRARY_PATH=/c/boost_1_85_0/stage/lib:$LD_LIBRARY_PATH

 ./configure --with-boost=/c/boost_1_85_0 --with-boost-libdir=/c/boost_1_85_0/stage/lib

export CXXFLAGS="-I/c/boost_1_85_0"
make

## Перевірка роботи
src/driver/dtiger --help 

## Перевірка цілих чисел
    echo "1*2" | src/driver/dtiger --dump-ast -
    echo "1*2" | src/driver/dtiger --dump-ast --trace-lexer - 
--(end of buffer or a NUL) 
--accepting rule at line 122 ("1")


Мій шлях
$ cd C:\\Users\\megao\\Desktop\\university\\compilators\\lab2\\dragon-tiger
