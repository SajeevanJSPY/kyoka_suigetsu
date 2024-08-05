project (kanzen_saimin)

include_directories(
    $VULKAN_SDK/x86_64/include/
)

if (WITH_VULKAN_BACKEND)
    add_definitions(-DWITH_VULKAN_BACKEND)
endif()
