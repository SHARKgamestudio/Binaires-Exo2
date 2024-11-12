#pragma once

#define PERMISSION_READ 1
#define PERMISSION_WRITE 2
#define PERMISSION_EXECUTE 4

class Perms {
private:
public:
	char perms = PERMISSION_READ;

	void Add(int perm);
	void Remove(int perm);
	bool HasPerm(int perm);
};