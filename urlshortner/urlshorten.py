from hashlib import sha256
import pickle
import os

def shorten(url:str, shortened_url_dict:dict)-> str:
    '''A function to hash the url to 6 digit hash. If the url is already in the dictionary, 
    return the next hash.
    Args:
        url: the original long url to be shortned (hashed)
        shortened_url_dict: a dictionary containing mapping of long urls to their short urls
    
    Returns:
        the hashed shortened url in hexadecimal of length 6
    '''
    shortened_url = None
    # print(shortened_url_dict.keys())
    #TODO: if url already in the dictionary, return the shortened url
    
    if(url in shortened_url_dict.keys()):
        return shortened_url_dict[url];
    #salt is to add randomization to the string before hashing
    salt = str(os.urandom(16))
    
    #TODO: create new shortened url in hexadecimal if the url is not in the dictionary
    #shortened_url = ???
    orig=url
    url+=salt
    shortened_url=sha256(url.encode()).hexdigest()[:6]
    
    #TODO: if the url is already in shortened_url_dict then add 1 to generated shortened url and continue rechecking till a shortened url is found
    #that is not in shortened_url_dict
    while(shortened_url in shortened_url_dict.values()):
        t=int(shortened_url,16)
        t+=1
        shortened_url=hex(t)[:6]
    
    #TODO: save the shortened url in the dictionary
    #shortened_url_dict[url] = ???
    shortened_url_dict[orig]=shortened_url
    return shortened_url
 

def restore(shortened_url, shortened_url_dict):
    '''A function to restore the long url from the short url

    Args:
        shortened_url: the short url
        shortened_url_dict: a dictionary containing mapping of long urls to their short urls
    
    Returns:
        the original long url
    '''
    # TODO: if the short url is not present in shortened_url_dict then return None
    if(shortened_url not in shortened_url_dict.values()):
        return None

    # TODO: if the short url is present in shortened_url_dict then return the corresponding long url
    v_lst=list(shortened_url_dict.values())
    k_lst=list(shortened_url_dict.keys())
    pos=v_lst.index(shortened_url)
    return k_lst[pos]
    
    # TODO: Delete next line
    # pass


#Do not change the main function
def main():
    '''The main function
    '''

    try:
        with open('shortened_url_dict.pkl', 'rb') as f:
            shortened_url_dict = pickle.load(f)
    except FileNotFoundError as e:
        print(e)
        shortened_url_dict = {}
    x=int(input("Enter your choice : \n1. To generate short url\n2.To restore url\n"))
    if(x==1):
        s=input("Enter the url :")
        print("Shortened url is : ",end='')
        print(shorten(s,shortened_url_dict))
    elif(x==2):
        s=input("Enter shortened url ")
        print("Original url is : ",end='')
        print(restore(s,shortened_url_dict))
    with open('shortened_url_dict.pkl', 'wb') as f:
        pickle.dump(shortened_url_dict, f)


if __name__ == "__main__":
    main()