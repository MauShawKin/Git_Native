#include <stdio.h>
#define log(frm, args...) {\
	printf("[%s : %s : %d]\t", __FILE__, __func__, __LINE__);\
	printf(frm, ##args);\
	printf("\n");\
}

int main() {
	log("hello github!");
	log("###%s %s###", __DATE__, __TIME__);
	log("1.创建版本库:");
	log("$ mkdir learngit");
	log("$ cd learngit");
	log("2.Git管理初始化:");
	log("$ git init");
	log("$ ls -ah");
	log("3.在当前目录下创建,或移入一些东西:");
	log("$ vim readme.txt");
	log("$ cp ../xxx.xx yyy/yy");
	log("4.添加文件到仓库:");
	log("$ git add readme.txt");
	log("$ git add yyy.yy");
	log("$ git commit -m \"wrote a readme file and copy an object\"");
	log("5.创建远程仓库: 创建SSH Key(须在用户主目录下创建)");
	log("$ ssh-keygen -t rsa -C \"email@eg.com\"");
	log("$ ls -ah | grep .ssh");
	log("$ cd .ssh");
	log("$ vim id_rsa.pub");
	log("(将 id_rsa.pub 中的公钥文本粘贴在github新添加的SSH Key中)");
	log("6.远程库与本地库关联:");
	log("$ git remote add origin git@github.com:yourId/reposName.git");
	log("origin是远程库的叫法设置(可随意)");
	log("7. 首次推送master分支的所有内容:")
	log("$ git push -u origin master");
	log("$ git push origin master");
	log("GoodBye!");

	return 0;
}
