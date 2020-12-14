import os
from Crypto.Cipher import AES
from Crypto.Hash import SHA256
from Crypto import Random
import base64
import hashlib
from Crypto.Cipher import AES
print("for message encryption and decryption enter m\nfor file encryption and decryption enter f")
h=input()
if(h=='m'or h=='M'):
    BLOCK_SIZE = 16
    pad = lambda s: s + (BLOCK_SIZE - len(s) % BLOCK_SIZE) * chr(BLOCK_SIZE - len(s) % BLOCK_SIZE)
    unpad = lambda s: s[:-ord(s[len(s) - 1:])]
    i=input("enter message:")
    
    
     
    def encrypt(raw, password):
	
        private_key = hashlib.sha256(password.encode("utf-8")).digest()
        raw = pad(raw)
        iv = Random.new().read(AES.block_size)
        cipher = AES.new(private_key, AES.MODE_CBC, iv)
        return base64.b64encode(iv + cipher.encrypt(raw))
     
     
    def decrypt(enc, password):

        private_key = hashlib.sha256(password.encode("utf-8")).digest()
        enc = base64.b64decode(enc)
        iv = enc[:16]
        cipher = AES.new(private_key, AES.MODE_CBC, iv)
        return unpad(cipher.decrypt(enc[16:]))
     
    while(True):
        h=input("enter e for encryption and d for decryption: ")
        if h=='e':
            password1 = input("Enter  password: ")
            encrypted = encrypt(i, password1)
	   
            print(encrypted)
         
        if h=='d':
            password2 = input("Enter  password: ")
            decrypted = decrypt(encrypted, password2)
	    
            print(bytes.decode(decrypted))
            break
if(h=='f'or h=='F'):        
    def encrypt(key, filename):
        chunksize =64 * 1024
        outputFile = "encrypted"+filename
        filesize = str(os.path.getsize(filename)).zfill(16)
        IV = Random.new().read(16)
        
        encryptor = AES.new(key, AES.MODE_CBC, IV)
        
        with open(filename, 'rb') as infile:
            with open(outputFile, 'wb') as outfile:
                outfile.write(filesize.encode('utf-8'))
                outfile.write(IV)
        
                while True:
                    chunk = infile.read(chunksize)
                
                    if len(chunk) == 0:
                        break
                    elif len(chunk) % 16 != 0:
                        chunk +=b' ' * (16 - (len(chunk) % 16))
            
                outfile.write(encryptor.encrypt(chunk))
    def decrypt(key, filename):
        chunksize =64 * 1024
        outputFile = filename[11:]
        
        with open(filename, 'rb') as infile:
            filesize = int(infile.read(16))
            IV = infile.read(16)
        
            decryptor = AES.new(key, AES.MODE_CBC, IV)
            
            with open(outputFile, 'w') as outfile:
                while True:
                    chunk = infile.read(chunksize)
            
                    if len(chunk) == 0:
                        break
            
                    outfile.write(decryptor.decrypt(chunk))
                    
        
    def getKey(password):
        hasher = SHA256.new(password.encode('utf-8'))
        return hasher.digest()
    
    def Main():
        choice = input("Would you like to (E)ncrypt or (D)ecrypt?: ")
        if choice == 'E' or choice == 'e':
            filename = input("File to encrypt: ")
            password = input("Password: ")
            encrypt(getKey(password), filename)
            print("Done.")
        elif choice=='d' or choice=='D':
            filename = input("File to decrypt: ")
            password = input("Password: ")
            decrypt(getKey(password), filename)
            print("Done.")
        else:
            print("No Option selected, closing…")
    
    if __name__ == '__main__':
        Main()