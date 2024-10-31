pushd build
cmake ../ -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=../install/win64 -DENABLE_TESTING=OFF -DBUILD_SHARED_LIBS=OFF -DCMAKE_CXX_STANDARD=17 -DCUSTOM_MEMORY_MANAGEMENT=ON -DBUILD_ONLY="cognito-idp"
cmake --build . --config=Release
cmake --install . --config=Release
popd
