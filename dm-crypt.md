---
date: 2022-12-29
draft: true
sr-due: 2023-03-15
sr-ease: 248
sr-interval: 2
tags:
- inbox
- definition
sr-due: 2023-12-30
sr-interval: 227
sr-ease: 268
---

# dm-crypt


```{.bash org-language="sh"}
# Redirect output of /dev/zero to initialize container file
dd if=/dev/zero bs=1M count=100 of=encrypted_change_name.img

# Initialize luks partition inside container
sudo cryptsetup luksFormat encrypted_change_name.img  # set passpharse and conifm it

# Open luks partition
sudo cryptsetup luksOpen encrypted_change_name.img

# Because we just created container, need create filesystem on it (one-time)
sudo mkfs.ext4
```

# Mount and unmount file container

```{.bash org-language="sh"}
# Open luks partition
sudo cryptsetup luksOpen encrypted_change_name.img
sudo mount  ~/tmp/my-mount-point
...
sudo umount ~/tmp/my-mount-point
sudo cryptsetup luksClose
```