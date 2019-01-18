#!/bin/bash
# use testnet settings,  if you need mainnet,  use ~/.geekcash/geekcashd.pid file instead
geekcash_pid=$(<~/.geekcash/testnet3/geekcashd.pid)
sudo gdb -batch -ex "source debug.gdb" geekcashd ${geekcash_pid}
