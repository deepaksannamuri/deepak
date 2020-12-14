import wave
import random
import glob
k=input()
try:
	a=r"C:\Users\Deepak\Desktop\all words"
	g=a+'/'+k+'.wav'
	w_one = wave.open(g, 'r')
	m=1
	b=glob.glob(r"C:\Users\Deepak\Desktop\words\telangana words\*.wav")
	d=glob.glob(r"C:\Users\Deepak\Desktop\words\rayala seema\*.wav")
	e=glob.glob(r"C:\Users\Deepak\Desktop\words\andhra final\*.wav")
	while(m==1):
		c=random.choice(b)
		f=random.choice(d)
		h=random.choice(e)
		w_two = wave.open(c, 'r')
		w_thr = wave.open(f, 'r')
		w_for = wave.open(h, 'r')
		if w_one.getparams() == w_two.getparams():
			print(w_one.getparams())
			print(w_two.getparams())
			print('match found at telangana words')
			m=0
		elif w_one.getparams() == w_thr.getparams():
			print(w_one.getparams())
			print(w_thr.getparams())
			print('match found at rayalaseema words')
			m=0
		elif w_one.getparams() == w_for.getparams():
			print(w_one.getparams())
			print(w_for.getparams())
			print('match found at andhra words')
			m=0
except FileNotFoundError:
	print(k+" is not in the data set")
