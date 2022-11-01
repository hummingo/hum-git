## git reference
[git-ref](https://git-scm.com/docs)
### Setup and config
```
git config --global --list
git config --global user.name "user.name"
git config --global user.email "user@email"
```
### Getting and Creating Projects
```
git init
git clone git@github.com:hummingo/hum-git.git
```
### Basic Snapshotting
```
git status
git add .
git add <file>
git diff .
git commit -m "commit message"
git notes add -m "note message" [<object>]
git restore <file>
git restore --staged <file>
git reset --hard <pathspec>
git rm --cached <file>
git rm --force <file>
```
### Branching and Mergeing
```
git branch --all
git branch --remotes
git branch --verbose
git branch -D <branch>
git brnacn -M <branch-name>
git checkout .
git checkout -b <new-branch>
git checkout -b <new-branch> <old-branch>
git switch <branch>
git merge 
git stash
git stash pop
git stash apply stash@{0}
git log
```
### Patching
```
git format-patch HEAD^
git diff . >> temp.diff
git apply patch-file.patch
git apply --reject patch-file.patch
git apply diff-file.diff
git cherry-pick commit-id -m 1
```
### Sharing and Updating Projects
```
git remote add remote-name github-address
git remote add origin git@github.com:hummingo/hum-git.git
git remote remove origin
git push origin master
git pull origin master
git push -u origin master
git push
```















