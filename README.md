# KYOKA SUIGETSU (KSU)

## quickstart
setup the `VULKAN_SDK` environment path variable

```
set VULKAN_SDK=/usr/path/to/VULKAN_SDK
```

```
cmake -B build
cd build
./bin/tensa_zangetsu
```


**Folder Structure**
```
|
|_ kanzen_saimin    (graphics renderer)
|_ tensa_zangetsu   (game engine)
|_ platform         (os specific)
|_ core

```

*NOTE: only /core and /kanzen_saimin functionalities exposes to the main projects*

platform support: linux, windows
compiler:
- linux - gcc, clang
- windows - MSVC, clang
