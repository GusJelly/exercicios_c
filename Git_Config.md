# Configuração GIT
## Git global setup
```console
git config --global user.name "Vitor Custódio"
git config --global user.email "vitor.custodio.0001081@edu.atec.pt"
```


## Create a new repository
```console
git clone git@git.atec.kissweb.pt:ambientes-trabalho/tpsicas1022/vitor-custodio.git
cd vitor-custodio
git switch -c main
touch README.md
git add README.md
git commit -m "add README"
git push -u origin main
```

## Push an existing folder
```console
cd existing_folder
git init --initial-branch=main
git remote add origin git@git.atec.kissweb.pt:ambientes-trabalho/tpsicas1022/vitor-custodio.git
git add .
git commit -m "Initial commit"
git push -u origin main
```

## Push an existing Git repository
```console
cd existing_repo
git remote rename origin old-origin
git remote add origin git@git.atec.kissweb.pt:ambientes-trabalho/tpsicas1022/vitor-custodio.git
git push -u origin --all
git push -u origin --tags
```