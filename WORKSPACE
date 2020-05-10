# ---------------------------------- C# DEPS -----------------------------------

# A newer version should be fine
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
    name = "io_bazel_rules_dotnet",
    remote = "https://github.com/bazelbuild/rules_dotnet",
    tag = "0.0.5",
)

load("@io_bazel_rules_dotnet//dotnet:deps.bzl", "dotnet_repositories")

dotnet_repositories()

load("@io_bazel_rules_dotnet//dotnet:defs.bzl", "core_register_sdk", "net_register_sdk", "mono_register_sdk",
    "dotnet_register_toolchains", "dotnet_repositories_nugets", "nuget_package")

dotnet_register_toolchains()
dotnet_repositories_nugets()

# For .NET Core:
core_register_sdk("v2.1.502", name = "core_sdk")

# For .NET Framework:
net_register_sdk("net471", name = "net_sdk")

# For Mono:
mono_register_sdk()
