
[Corpus](https://drive.google.com/drive/folders/1pGoHm9L51LaONJISp5euYXSmEOts9CeP?usp=sharing)

# Contribution

* Executable corpus for benchmarking compression algorithms
* Corpus type directly influences compression metrics CS, DS, CR => **what** you are compressing has influence on **which** is the optimal algorithm 

CM - compression metrics
CS - compression speed
DS - decompression speed
CR - compression ratio


Hocemo da pokazemo: compressionAlgRangs(silesia) != compressionAlgRangs(Corpus)  

Zasto => 
* .text sekcije nemaju istu bitovsku strukturu kao i silesia.tar  
* uopsteno xml, exe, image, txt, pdf nemaju isto rangiranje algoritama kompresije  
Dakle, algoritmi kompresije ne rangiraju se isto po metrikama CS, DS, CR kada se primenjuju
na razlicite tipove datoteka.
=> Odabir korpusa je važan, mi smo uradili case-study za executable (evo corpusa).


# TODO

* [ ] Rangiranje algoritama kompresije po: CS, DS, CR

* [ ] On silesia, argumentacija za "Tip fajla koji se kompresuje utice na odnos ALG/CM"

```
rankings = []
for type in filetypes:
    for metric in CMs:
        ranking = rank(type, metric) # rank po algoritmima
        rankings.append(ranking)
        
value = rankDiff(rankings) # Nesto sto nam daje diff rangova, kroz tipove nad metrikama. 
# value~0 => tip nema uticaja na CM
# value -> inf => tip ima uticaj na CM

```
