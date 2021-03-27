# alwaysatty

Make programs always think their stdout is a tty.

Install:

    make
    sudo make install

Insall from the AUR:

    paru -S alwaysatty-git

Usage:

    alwaysatty pacman -Qs python | less

Tips:

- Add `alias alwaysatty='alwaysatty '` to bashrc/zshrc to use `alwaysatty` with
    aliases.
- Add `compdef alwaysatty=command` to zshrc to get command completions for
    `alwaysatty`.
