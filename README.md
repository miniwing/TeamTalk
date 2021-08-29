#TeamTalk

欢迎赞赏，以支持服务器、域名等费用

# 运行im
/etc/init.d/redis restart
/etc/init.d/php-fpm restart
/etc/init.d/nginx restart
/etc/init.d/mysql restart

# 安装依赖
cd /root/TeamTalk/server/src
sh make_log4cxx.sh
sh make_hiredis.sh

# 编译server
sh build.sh version 1.0.0

# 拷贝
cp /root/TeamTalk/server/im-server-1.0.0.tar.gz /root/TeamTalk/auto_setup/im_server/

# 解压
cd /root/TeamTalk/auto_setup/im_server/
tar -zxvf im-server-1.0.0.tar.gz

# 执行
./setup.sh install

# 查看服务器运行情况
ps -ef | grep server
