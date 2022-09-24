## git reference

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
```






















