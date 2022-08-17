# Create new branch
Tag: #git 
Source: [[StackOverflow]] 
URL: https://stackoverflow.com/q/51625435

```sh
# Setup
git clone https://github.com/EbookFoundation/free-programming-books.git
cd free-programming-books
git remote add upstream https://github.com/EbookFoundation/free-programming-books.git

# Create a new branch from upstream
git fetch upstream
git checkout -b branchName upstream/main

# Update from upstream
git pull upstream main

# Push
git push origin branchName
```

> **NOTE** 📝
> Ideally, `upstream` URL should _not_ be the same as the `origin` one (which should be your fork).  `upstream` should refer to the original repo URL that was forked.

#### Useful Commands

- Remote list: `git remote -v`
- Local branch: `git branch`
- Remote branch: `git branch -r`
- All branch: `git branch -a`
- Switch local branch: `git checkout branchName`
- Switch remote branch: `git checkout --track origin/remoteBranchName`
- Merge branch: `git checkout main; git merge branchName`
- Delete local branch: `git branch -d branchName`
- Delete remote branch: `git push origin --delete branchName`

#### Useful links

https://www.freecodecamp.org/news/git-fetch-vs-pull/

