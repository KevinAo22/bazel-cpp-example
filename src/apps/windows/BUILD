load("@rules_cc//cc:defs.bzl", "cc_binary")

SRCS = ["main.cpp"]

DEPS = [
    "//src/include:windows_hdr",
    "//src/libs/platform:platform",
]

cc_binary(
    name = "example",
    srcs = SRCS,
    linkstatic = True,
    tags = ["windows"],
    visibility = ["//visibility:public"],
    deps = DEPS,
)
