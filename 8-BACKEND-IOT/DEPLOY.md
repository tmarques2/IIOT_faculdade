# PASSOS PARA O DEPLOY

## 1 - Logar na Azure com `az login --use-device-code`

## 2 - Criar as variáveis de ambiente para serem usadas no command line:

```
$RG="thainara-marques-rg"
$LOC="centralus"
$APP="thainara-marques-iiot-app"
$SP="thainara-marques-iiot-sp"
```

## 3 - Criar grupo de recurso:

```
az group create --name $RG --location $LOC
```

## 4 - Criar um plano de serviço:

```
az appservice plan create --resource-group $RG --name $SP  --is-linux --sku "S2"
```

## 5 - Criar a app service (servidor onde realmente vai rodar o back):
```
az webapp create --resource-group $RG --plan $SP --name $APP --runtime "NODE:22-lts"
```

