load("@rules_cc//cc:defs.bzl", "cc_library")

HDRS = ["platform.h"]

SRCS = select({
    "@platforms//os:linux": ["platform_linux.cpp"],
    "@platforms//os:macos": ["platform_macos.cpp"],
    "@platforms//os:windows": ["platform_windows.cpp"],
})

COPTS = select({
    "@platforms//os:linux": [],
    "@platforms//os:macos": [],
    "@platforms//os:windows": [],
})

LINKOPTS = select({
    "@platforms//os:linux": [],
    "@platforms//os:macos": [],
    "@platforms//os:windows": [],
})

cc_library(
    name = "platform",
    srcs = SRCS,
    hdrs = HDRS,
    copts = COPTS,
    linkopts = LINKOPTS,
    tags = ["common"],
    visibility = ["//visibility:public"],
)
