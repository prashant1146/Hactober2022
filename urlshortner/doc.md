# URL shortner

## Simple logic to create a url shortner
1. A url path can have a-z A-Z 0-9, total 62 chars.
2. But in database we store incremental values like 1,2,3,4...
3. So url shortner logic should be able to map incremental Id of database to incremental short url id.
```
idToShortURL function from `urlshortner.go` file does this
```
/shorten --> actual address is stored against a id in database --> db id is converted to short url and this url is returned to user


4. Also reverse should be true, from the incremental short url id we should be able to derive database id.
```
shortURLToId function from `urlshortner.go` file does this
```
/redirect --> short url is converted to numeric database id --> value is fetched from datastore and actual url is returned to user ( with HTTP response code 301 for browser to redirect automatically)
