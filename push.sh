#!/bin/bash
username="libohao666"
password="libohao0"

echo "=======提交开始======"

git add *
git commit -m $(date "+%Y%m%d")

expect<<EOF
spawn git push origin master
set timeout 2
expect "Username for" {send "libohao666\r"}
expect "Password for" {send "libohao0\r"}
EOF

echo "======提交结束======"
