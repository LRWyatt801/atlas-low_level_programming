##GIT configs
echo "setting up git config..."
git config --global user.email "loganwyatt1995@gmail.com"
git config --global user.name "LRWyatt801"
cd /root

##Alias setup for working directory
echo "PS1='\u:\w $ '" >> .bashrc
echo "creating aliases..."
touch .bash_aliases
echo "alias tt='cd /root/${repo}/${dir}'" >> .bash_aliases
echo "alias gcc='gcc -Wall -Werror -Wextra -pedantic -std=gnu89'" >> .bash_aliases
echo "alias ..='cd ..'" >> .bash_aliases
source .bash_aliases
source .bashrc