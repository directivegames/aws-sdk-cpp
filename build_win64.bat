mkdir build
pushd build

cmake ../ ^
-DCMAKE_BUILD_TYPE=Release ^
-DCMAKE_INSTALL_PREFIX=../install/win64 ^
-DENABLE_UNITY_BUILD=ON ^
-DENABLE_TESTING=OFF ^
-DFORCE_SHARED_CRT=ON ^
-DBUILD_SHARED_LIBS=OFF ^
-DCMAKE_CXX_STANDARD=20 ^
-DCPP_STANDARD=20 ^
-DBUILD_ONLY="cognito-idp"

cmake --build . --config=Release
cmake --install . --config=Release

popd
