### OPEN SSH

- ansible uses openssh server

```bash
ssh <ip-address of the server>
# type in yes to the fingerprint question
# enter the password
```

- to generate ssh-key pair use the `ssh-keygen` command

```bash
ssh-keygen -t ed25519 -C "Sahil key"
# here -t flag is for the ssh-key type
# this keytype is more secure than the default key
# the -C flag is the optional flag for adding a comment to the key
# adding a passphrase to the ssh-key makes it more secure and is recommended
```

```bash
# this creates a public private key pair
# the public key is with a `.pub` extension and is intended to be shared, whereas the private key is private
# the type of the key is at the beginning of the key and the optional comment is at the end of the key
```

```bash
ssh-copy-id -i ~/.ssh/id_rsa.pub <IP-address of the server>
# command to copy id to server
# here -i stands for the input file
# usually the normal keys should be encripted, whereas the ansible key we want to
# work behind us, and therefore neednot have the passphrase text
```

```bash
# at this point of time, we have 2 keys added to each of our servers
# and how do we specify which key to use
ssh -i ~/.ssh/ansible.pub <IP-address of the server where you added this key>
# if the key is not specified then which key is it going to use. (the orignal key as jay said)
# and this asks for passphrase

eval $(ssh-agent) # a program that caches your ssh-key passphrase
# so that you don't have to enter it all the time
ssh-add # adds the key
# better create aliases for this as these agent and add commands are tied to the terminal window
# and once that session closses, the data is gone
```

```bash
# use git and github to manage your codebase
# install ansible ->> source or package manager
# create an inventory file that contains the ip addresses of the hosts create an inventory file that contains the ip addresses of the host
ansible all --key-file ~/.ssh/ansible -i inventory -m ping
# this command pings all the servers


# all the parameters to the ansible command can be avoided by creating an ansible config file (ansible.cfg)
# inside that write the following

[defaults]
inventory = inventory
private_key_file = ~/.ssh/ansible

ansible all --list-host # gives a list of ip addrs
ansible all -m gather_facts # lists all the background information about the servers
ansible all -m gather_facts --limit <ipaddress of the server> # limits the output to one server



ansible all -m pacman -a update_cache=true
# commands like pacman require sudo, and therefore fail if normally used
ansible all -m pacman -a update_cache=true --become --ask-become-pass
# this says use sudo and ask for the password if required
ansible all -m pacman -a name=neovim --become --ask-become-pass
# this is installing neovim on all of the servers
ansible all -m pacman -a "upgrade=dist" --become --ask-become-pass

```
