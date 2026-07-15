
cc_library(
	name = "nudny-fio",
	srcs = [
		"src/nudny/fio/serializable.cpp",
	],
	hdrs = [
		"include/nudny/fio/io.hpp",
		"include/nudny/fio/serializable.hpp",
	],
	includes = [
		"include",
	],
	visibility = [
		"//visibility:public",
	],
	deps = [ 
		"@nlohmann_json//:json",
		"@nudny-util//:nudny-util",
	],
)

cc_test(
	name = "nudny-fio-test",
	includes = ["test/include"],
	srcs = glob([
		"test/include/nudny/fio/nudny_io_test.hpp",
		"test/include/nudny/fio/nudny_serializable_test.hpp",
		"test/src/nudny/fio/nudny_io_test.cpp",
		"test/src/nudny/fio/nudny_serializable_test.cpp"
	]),
	copts = [
		"-Wall",
		"-Wextra",
		"-Wpedantic",
	],
	deps = [
		":nudny-fio",
		"@googletest//:gtest_main",
		"@nlohmann_json//:json",
		"@nudny-util//:nudny-util",
	],
)

cc_binary(
	name = "app",
	srcs = [ "src/main.cpp"	],
	deps = [ 
		":nudny-fio",
		"@nlohmann_json//:json", 
		"@nudny-util//:nudny-util",
	],
)
