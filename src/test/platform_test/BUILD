load("@rules_cc//cc:cc_test.bzl", "cc_test")

SRCS = select({
    "@platforms//os:linux": ["platform_test_linux.cpp"],
    "@platforms//os:macos": ["platform_test_macos.cpp"],
    "@platforms//os:windows": ["platform_test_windows.cpp"],
})

DEPS = select({
    "@platforms//os:linux": [],
    "@platforms//os:macos": [],
    "@platforms//os:windows": [],
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
    deps = [
        "//src/libs/platform",
    ] + DEPS + [
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)
