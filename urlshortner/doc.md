# URL shortner

## Simple logic to create a url shortner
1. A url path can have a-z A-Z 0-9, total 62 chars.
2. But in database we store incremental values like 1,2,3,4...
3. So url shortner logic should be able to map incremental Id of database to incremental short url id.
```
idToShortURL function from `urlshortner.go` file does this
```


4. Also reverse should be true, from the incremental short url id we should be able to derive database id.
```
shortURLToId function from `urlshortner.go` file does this
```
