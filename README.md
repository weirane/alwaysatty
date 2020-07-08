# alwaysatty

Make programs always think their stdout is a tty.

    make
    sudo make install

Use the AUR:

    yay -S alwaysatty-git

Usage:

    alwaysatty pacman --color auto -Qs python | less

Tips:

- Add `alias alwaysatty='alwaysatty '` to your bash/zsh config to use
    `alwaysatty` with your aliases.
- Add `compdef alwaysatty=command` to your zshrc to get command completions for
    `alwaysatty`.
