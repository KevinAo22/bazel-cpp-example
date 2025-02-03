# bazel-cpp-example

![Build](https://github.com/KevinAo22/bazel-cpp-example/actions/workflows/build.yml/badge.svg) ![Test](https://github.com/KevinAo22/bazel-cpp-example/actions/workflows/test.yml/badge.svg)

An example of a cross-platform C++ repository based on `Bazel`, and utilizing GitHub Actions along with `googletest` and other tools.

## Supported OS

[x] Windows

[x] macOS

[x] Linux

## Supported CI ecosystems

[x] GitHub Actions

## Supported Development Tools

[x] GoogleTest

[x] Compilation Database

[ ] SonarCloud

## How to?

### Build

Build the project on different platforms.

```bash
# Linux - debug mode
bazel build --config=debug --config=linux //src/apps/linux:example

# Linux - release mode
bazel build --config=release --config=linux //src/apps/linux:example

# macOS - debug mode
bazel build --config=debug --config=macos //src/apps/macos:example

# macOS - release mode
bazel build --config=release --config=macos //src/apps/macos:example

# Windows - debug mode
bazel build --config=debug --config=windows //src/apps/windows:example

# Windows - release mode
bazel build --config=release --config=windows //src/apps/windows:example
```

### Test

Run unit test cases on different platforms.

```bash
bazel test --test_output=all //src/test/...
```

### Generate Compilation Database

```bash
bazel run :refresh_compile_commands
```
