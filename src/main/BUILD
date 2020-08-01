load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "toaster",
    # srcs = ["toaster.cc"],
    hdrs = ["toaster.h"],
)

cc_library(
    name = "bakery",
    # srcs = ["bakery.cc"],
    hdrs = ["bakery.h"],
)

cc_binary(
    name = "toaster_sim_2",
    srcs = ["toaster_sim_2.cc"],
    deps = [
        ":toaster",
        ":bakery",
        # "//lib:hello-time",
    ],
)
