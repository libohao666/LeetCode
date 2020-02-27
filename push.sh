#!/bin/bash
username="libohao666"
password="libohao0"

echo "\n=======提交开始======\n"

git add *
git commit -m $(date "+%Y%m%d")

expect<<EOF
spawn git push origin master
set timeout 2
expect "Username for" {send "${username}\r"}
expect "Password for" {send "${libohao0}\r"}
EOF

echo "\n======提交结束======\n"
