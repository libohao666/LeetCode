#!/bin/bash
username="libohao666"
password="libohao0"

echo "=======提交开始======"

git add *
git commit -m $(date "+%Y%m%d")
git push origin master

expect<<EOF
spawn ./push-1.sh
expect "Username for" {send "${username}\r"}
expect "Password for" {send "${password}\r"}
EOF

echo "======提交结束======"
