load("@rules_cc//cc:cc_test.bzl", "cc_test")

SRCS = select({
    "@platforms//os:linux": ["platform_test_linux.cpp"],
    "@platforms//os:macos": ["platform_test_macos.cpp"],
    "@platforms//os:windows": ["platform_test_windows.cpp"],
})

DEPS = [
    "//src/libs/platform",
] + select({
    "@platforms//os:linux": ["//src/include:linux_hdr"],
    "@platforms//os:macos": ["//src/include:macos_hdr"],
    "@platforms//os:windows": ["//src/include:windows_hdr"],
})

LINKOPTS = select({
    "@platforms//os:linux": [],
    "@platforms//os:macos": [],
    "@platforms//os:windows": [],
})

cc_test(
    name = "platform_test",
    size = "small",
    srcs = SRCS,
    linkopts = LINKOPTS,
    linkstatic = True,
    tags = [
        "ut",
    ],
    deps = DEPS + [
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)
