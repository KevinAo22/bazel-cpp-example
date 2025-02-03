load("@rules_cc//cc:defs.bzl", "cc_library")

COMMON_HDRS = glob([
    "common/*.h",
])

cc_library(
    name = "common_hdr",
    hdrs = COMMON_HDRS,
    includes = ["."],
    tags = ["common"],
    visibility = ["//visibility:public"],
)

LINUX_HDRS = glob([
    "linux/*.h",
])

cc_library(
    name = "linux_hdr",
    hdrs = LINUX_HDRS,
    includes = ["."],
    tags = ["linux"],
    visibility = ["//visibility:public"],
    deps = ["//src/include:common_hdr"],
)

MACOS_HDRS = glob([
    "macos/*.h",
])

cc_library(
    name = "macos_hdr",
    hdrs = MACOS_HDRS,
    includes = ["."],
    tags = ["macos"],
    visibility = ["//visibility:public"],
    deps = ["//src/include:common_hdr"],
)

WINDOWS_HDRS = glob([
    "windows/*.h",
])

cc_library(
    name = "windows_hdr",
    hdrs = WINDOWS_HDRS,
    includes = ["."],
    tags = ["windows"],
    visibility = ["//visibility:public"],
    deps = ["//src/include:common_hdr"],
)
