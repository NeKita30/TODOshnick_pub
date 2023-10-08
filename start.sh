if [ ! -d ./build ]; then
    mkdir build
    cd build
    cmake ../project_sources
    make
else
    cd build
fi
./test
