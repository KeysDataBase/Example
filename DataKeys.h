#pragma once
#include <string>
#include <vector>

inline std::string internal_id = "code";
inline std::string product_id = "code";
inline std::string secret_key = "key";

struct server
{
	static void init();
	static int get_id();
	static bool login(std::string key);
	static bool check_user();
	static bool ban();
	static bool is_banned();
	static bool log(std::string message);
	static bool is_product_frozen();
	static void get_bytes();
	static std::vector<uint8_t> decrypt_bytes();
};
