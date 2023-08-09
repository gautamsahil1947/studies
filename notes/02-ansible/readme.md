## OPEN SSH

```bash
ssh ip.address.of.server
# make sure that the servers are up-to-date
# otherwise you might not be able to install some packages
```

#### SSH key managenent

```bash
cd ~/.ssh
ls -al
ssh-keygen # generate a ssh key-pair
ssh-keygen -t ed25519 -C "A Comment"
ssh-copy-id -i ~/.ssh/id_ed25519.pub ip.address.of.server
# the moment you do this, it prompts you for password.
# after that run the following commands
cd ~/.ssh
ls -al
# there will be an authorised_keys file, which would contain the
# public ssh key to which the path was provided
```

#### Creating SSH keys for ansible

```bash
# repeate the same steps as above to create a seperate key for ansible
ssh -i path/to/ansible/ssh/key ip.address.of.server
# if you don't use the path to the ssh key, it will use the default key. (you can know
# if it has a passphrase).
eval $(ssh-agent) # run ssh agent in the background to cache ssh passwords (if any)
ssh-add<CR>
# enter the passphrase to the prompt, and it caches the password
ps aux | grep Pid
```

#### Git for Ansible

```bash
# it's easy
```

#### Getting started with Ansible

```bash
# inside the ansible directory, create a file called inventory
nvim inventory
# add the ip addresses of the servers to this file. (can add fully qualified domain names too)
# more research needed.
ansible all --key-file ~/.ssh/sahilAndAnsible -i inventory -m ping
# it pings all the servers, and returns success or faliure message.
# python is required on the servers.
```

```bash
[sahil@arch ~/.config/repos/studies/notes/02-ansible/ansibledir]$ ansible all --key-file ~/.ssh/sahilAndAnsible -i inventory -m ping
[WARNING]: Platform linux on host 192.168.122.164 is using the discovered Python interpreter at /usr/bin/python3.11, but
future installation of another Python interpreter could change the meaning of that path. See
https://docs.ansible.com/ansible-core/2.15/reference_appendices/interpreter_discovery.html for more information.
192.168.122.164 | SUCCESS => {
    "ansible_facts": {
        "discovered_interpreter_python": "/usr/bin/python3.11"
    },
    "changed": false,
    "ping": "pong"
}
[WARNING]: Platform linux on host 192.168.122.120 is using the discovered Python interpreter at /usr/bin/python3.11, but
future installation of another Python interpreter could change the meaning of that path. See
https://docs.ansible.com/ansible-core/2.15/reference_appendices/interpreter_discovery.html for more information.
192.168.122.120 | SUCCESS => {
    "ansible_facts": {
        "discovered_interpreter_python": "/usr/bin/python3.11"
    },
    "changed": false,
    "ping": "pong"
}
[WARNING]: Platform linux on host 192.168.122.63 is using the discovered Python interpreter at /usr/bin/python3.11, but
future installation of another Python interpreter could change the meaning of that path. See
https://docs.ansible.com/ansible-core/2.15/reference_appendices/interpreter_discovery.html for more information.
192.168.122.63 | SUCCESS => {
    "ansible_facts": {
        "discovered_interpreter_python": "/usr/bin/python3.11"
    },
    "changed": false,
    "ping": "pong"
}
```

```bash
# once the config file has been created, you can shorten the command to
ansible all -m ping # uses defaults from ansible.cfg (for ssh key, invenrory file etc.)
ansible all --list-hosts # shows the hosts under ansible
ansible all -m gather_facts # gives a lot of output
# this contains the information about the servers. (a lot of it, including the processor)
```

```bash
ansible all -m gather_facts --limit 192.168.122.63
# limits the gather facts command to only one server
```

```bash

```

```bash

```

```bash

```

```bash

```

```bash

```

```bash

```

```bash

```

```bash

```
