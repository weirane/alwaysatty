CC := gcc
CFLAGS := -shared -fPIC
LDFLAGS := -ldl

DESTDIR ?= /
PREFIX ?= /usr

libalwaysatty.so: alwaysatty.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS) -o $@

install: libalwaysatty.so
	install -Dm755 alwaysatty "$(DESTDIR)$(PREFIX)/bin"
	install -Dm755 libalwaysatty.so "$(DESTDIR)$(PREFIX)/lib"

.PHONY: install
