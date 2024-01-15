load("@rules_cc//cc:defs.bzl", "cc_binary")

SRCS = ["main.cpp"]

DEPS = ["//src/libs/platform:platform"]

cc_binary(
    name = "example",
    srcs = SRCS,
    linkstatic = True,
    tags = ["macos"],
    visibility = ["//visibility:public"],
    deps = DEPS,
)
