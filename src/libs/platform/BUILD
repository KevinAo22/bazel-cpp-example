load("@rules_cc//cc:defs.bzl", "cc_library")

SRCS = select({
    "@platforms//os:linux": ["platform_linux.cpp"],
    "@platforms//os:macos": ["platform_macos.cpp"],
    "@platforms//os:windows": ["platform_windows.cpp"],
})

DEPS = select({
    "@platforms//os:linux": ["//src/include:linux_hdr"],
    "@platforms//os:macos": ["//src/include:macos_hdr"],
    "@platforms//os:windows": ["//src/include:windows_hdr"],
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
    copts = COPTS,
    linkopts = LINKOPTS,
    tags = ["common"],
    visibility = ["//visibility:public"],
    deps = DEPS,
)
