FROM python:3.8

RUN python -m pip install --upgrade pip

RUN pip3 install keymapviz

WORKDIR /keymap

CMD ["/bin/sh", "-c", "keymapviz keymap.c -k ergodox > layout.ascii 2>&1"]
