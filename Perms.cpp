#include "Perms.h"

#include <iostream>

void Perms::Add(int perm) {
	char newPerms = perms | perm;
	perms = newPerms;

	std::cout << int(perms) << std::endl;
}

void Perms::Remove(int perm) {
	char newPerms = perms ^ perm;
	perms = newPerms;

	std::cout << int(perms) << std::endl;
}

bool Perms::HasPerm(int perm) {
	return perms & perm;
}