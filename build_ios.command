mkdir build
pushd build

cmake ../ \
-DCMAKE_BUILD_TYPE=Release \
-DCMAKE_INSTALL_PREFIX=../install/ios \
-DENABLE_UNITY_BUILD=ON \
-DENABLE_TESTING=OFF \
-DFORCE_SHARED_CRT=ON \
-DBUILD_SHARED_LIBS=OFF \
-DUSE_CRT_HTTP_CLIENT=ON \
-DCMAKE_CXX_STANDARD=20 \
-DCPP_STANDARD=20 \
-DBUILD_ONLY="cognito-idp" \
-DCMAKE_OSX_SYSROOT="/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS.sdk" \
-DCMAKE_OSX_ARCHITECTURES="arm64" \
-DCMAKE_SYSTEM_NAME="Darwin" \
-DCMAKE_SHARED_LINKER_FLAGS="-framework Foundation -lz -framework Security" \
-DCMAKE_EXE_LINKER_FLAGS="-framework Foundation -framework Security" \

cmake --build . --config=Release
cmake --install . --config=Release

popd
