# Metric Literature Report

Retrieval date: 2026-07-01

Citation-count priority: OpenAlex `cited_by_count`, Semantic Scholar `citationCount`, then Crossref `is-referenced-by-count`.

Selection status: automated relevance filtering accepted for this change; entries should be manually curated before dissertation citation.

## Summary

| Metric | Selected | Top source | Count source | Count | Status |
|---|---:|---|---|---:|---|
| File size | 10 | Improving compression ratio, area overhead, and test application time for system-on-a-chip test data compression/decompression | Crossref is-referenced-by-count | 76 | complete |
| Byte entropy | 10 | Local Shannon entropy measure with statistical tests for image randomness | Crossref is-referenced-by-count | 638 | complete |
| Chi-square byte-frequency deviation | 10 | The Chi-square test of independence | Crossref is-referenced-by-count | 2180 | complete |
| Monte Carlo pi estimate | 10 | Monte Carlo Statistical Methods | Crossref is-referenced-by-count | 3232 | complete |
| Serial correlation coefficient | 10 | Quantum random number generators | Crossref is-referenced-by-count | 670 | complete |
| Conditional entropy | 10 | Data Compression Using Dynamic Markov Modelling | Crossref is-referenced-by-count | 139 | complete |
| n-gram entropy | 10 | Entropy and data compression schemes | Crossref is-referenced-by-count | 206 | complete |
| Lempel-Ziv complexity | 10 | Estimating the Entropy Rate of Spike Trains via Lempel-Ziv Complexity | Crossref is-referenced-by-count | 137 | complete |
| Section-size ratios | 10 | An intelligent PE-malware detection system based on association mining | Crossref is-referenced-by-count | 145 | complete |
| Section-level entropy | 10 | Using Entropy Analysis to Find Encrypted and Packed Malware | Crossref is-referenced-by-count | 286 | complete |

## Method limitations and unresolved ambiguities

- The selected lists use automated title-based relevance gates. The user accepted this automated selection for the change; manual topical curation remains advisable before dissertation citation.
- OpenAlex and Semantic Scholar were unavailable during retrieval, so all reported counts are Crossref `is-referenced-by-count` values rather than globally comparable citation counts.
- Randomness-test sources may support multiple metrics (chi-square, Monte Carlo, and serial correlation), while entropy sources may overlap across whole-file, conditional, n-gram, and section-level interpretations.
- Section-size-ratio literature is sparse; its list uses the documented executable-layout and malware-feature fallback hierarchy.
- The bibliography deduplicates sources shared by metric lists, so 100 ranked selections may produce fewer than 100 unique BibTeX entries.

## File size

Search aliases: file size, input size, small file compression, compression overhead

Queries:
- `file size compression ratio overhead`
- `small file compression overhead`
- `data compression performance input size`

### Selected sources

1. Improving compression ratio, area overhead, and test application time for system-on-a-chip test data compression/decompression
   - Authors: P.T. Gonciari, B.M. Al-Hashimi, N. Nicolici
   - Year: 2002
   - Venue/publisher: Proceedings 2002 Design, Automation and Test in Europe Conference and Exhibition
   - Type: proceedings-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1109/date.2002.998363
   - Count: 76 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `file size compression ratio overhead`
   - Relevance: Relevant to file size, compression overhead, or size-dependent compression performance.
   - Metadata enrichment: Publisher/venue metadata manually verified on 2026-07-01.
2. Inverted file compression through document identifier reassignment
   - Authors: Wann-Yun Shieh, Tien-Fu Chen, Jean Jyh-Jiun Shann, Chung-Ping Chung
   - Year: 2003
   - Venue/publisher: Information Processing &amp; Management
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1016/s0306-4573(02)00020-1
   - Count: 58 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `file size compression ratio overhead`
   - Relevance: Relevant to file size, compression overhead, or size-dependent compression performance.
3. Data compression and database performance
   - Authors: G. Graefe, L.D. Shapiro
   - Year: 1991
   - Venue/publisher: [Proceedings] 1991 Symposium on Applied Computing
   - Type: proceedings-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1109/soac.1991.143840
   - Count: 57 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `data compression performance input size`
   - Relevance: Relevant to file size, compression overhead, or size-dependent compression performance.
   - Metadata enrichment: Publisher/venue metadata manually verified on 2026-07-01.
4. Experiments in text file compression
   - Authors: Frank Rubin
   - Year: 1976
   - Venue/publisher: Communications of the ACM
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1145/360363.360368
   - Count: 54 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `file size compression ratio overhead`
   - Relevance: Relevant to file size, compression overhead, or size-dependent compression performance.
5. Packet-based input test data compression techniques
   - Authors: E.H. Volkerink, A. Khoche, S. Mitra
   - Year: 2002
   - Venue/publisher: Proceedings. International Test Conference
   - Type: proceedings-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1109/test.2002.1041756
   - Count: 49 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `data compression performance input size`
   - Relevance: Relevant to file size, compression overhead, or size-dependent compression performance.
   - Metadata enrichment: Publisher/venue metadata manually verified on 2026-07-01.
6. PDATS Lossless Address Trace Compression For Reducing File Size And Access Time
   - Authors: E.E. Johnson, Jiheng Ha
   - Year: 1994
   - Venue/publisher: Proceeding of 13th IEEE Annual International Phoenix Conference on Computers and Communications
   - Type: proceedings-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1109/pccc.1994.504117
   - Count: 33 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `file size compression ratio overhead`
   - Relevance: Relevant to file size, compression overhead, or size-dependent compression performance.
   - Metadata enrichment: Publisher/venue metadata manually verified on 2026-07-01.
7. Lossless data compression techniques and their performance
   - Authors: Komal Sharma, Kunal Gupta
   - Year: 2017
   - Venue/publisher: 2017 International Conference on Computing, Communication and Automation (ICCCA)
   - Type: proceedings-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1109/ccaa.2017.8229810
   - Count: 30 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `data compression performance input size`
   - Relevance: Relevant to file size, compression overhead, or size-dependent compression performance.
8. Data Compression
   - Authors: David Salomon
   - Year: 2007
   - Venue/publisher: Springer London
   - Type: book
   - Canonical non-paper source: yes
   - DOI/URL: https://doi.org/10.1007/978-1-84628-603-2
   - Count: 24 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `data compression performance input size`
   - Relevance: Relevant to file size, compression overhead, or size-dependent compression performance. Included as a canonical book-length treatment of the metric family.
   - Metadata enrichment: Publisher/venue metadata manually verified on 2026-07-01.
9. JPEG-compatible Joint Image Compression and Encryption Algorithm with File Size Preservation
   - Authors: Yuxiang Peng, Chong Fu, Guixing Cao, Wei Song, Junxin Chen, Chiu-Wing Sham
   - Year: 2024
   - Venue/publisher: ACM Transactions on Multimedia Computing, Communications, and Applications
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1145/3633459
   - Count: 23 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `file size compression ratio overhead`
   - Relevance: Relevant to file size, compression overhead, or size-dependent compression performance.
10. Exploiting clustering in inverted file compression
   - Authors: A. Moffat, L. Stuiver
   - Year: 1996
   - Venue/publisher: Proceedings of Data Compression Conference - DCC '96
   - Type: proceedings-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1109/dcc.1996.488313
   - Count: 20 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `file size compression ratio overhead`
   - Relevance: Relevant to file size, compression overhead, or size-dependent compression performance.
   - Metadata enrichment: Publisher/venue metadata manually verified on 2026-07-01.

### Rejected high-count candidates

- Algorithms for Delta Compression and Remote File Synchronization (2003); 18 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Using Normalized Compression Distance for Classifying File Fragments (2010); 18 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- File archival techniques using data compression (1982); 17 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- A Double-Adaptive File Compression Algorithm (1983); 17 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Variable Compression Ratio Engine (2002); 17 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- IFC File Content Compression Based on Reference Relationships (2020); 16 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- In Place Differential File Compression (2005); 15 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- The effect of image content on detail preservation and file size reduction in lossy compression (2007); 15 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- File compression using variable length encodings (1972); 14 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Headers Overhead Estimation, Header Suppression and Header Compression in WiMAX (2007); 12 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.

## Byte entropy

Search aliases: Shannon entropy, information entropy, byte entropy, entropy coding

Queries:
- `Shannon entropy information theory data compression`
- `information entropy entropy coding compression`
- `byte entropy randomness compression`

Ambiguity notes:
- Whole-file byte entropy is distinct from conditional, n-gram, and section-level entropy.

### Selected sources

1. Local Shannon entropy measure with statistical tests for image randomness
   - Authors: Yue Wu, Yicong Zhou, George Saveriades, Sos Agaian, Joseph P. Noonan, Premkumar Natarajan
   - Year: 2013
   - Venue/publisher: Information Sciences
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1016/j.ins.2012.07.049
   - Count: 638 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `byte entropy randomness compression`
   - Relevance: Relevant to whole-file symbol entropy, information theory, entropy coding, or compressibility.
2. Entropy and Information Theory
   - Authors: Robert M. Gray
   - Year: 2011
   - Venue/publisher: Springer US
   - Type: book
   - Canonical non-paper source: yes
   - DOI/URL: https://doi.org/10.1007/978-1-4419-7970-4
   - Count: 563 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `Shannon entropy information theory data compression`
   - Relevance: Relevant to whole-file symbol entropy, information theory, entropy coding, or compressibility. Included as a canonical book-length treatment of the metric family.
3. Regularities unseen, randomness observed: Levels of entropy convergence
   - Authors: James P. Crutchfield, David P. Feldman
   - Year: 2003
   - Venue/publisher: Chaos: An Interdisciplinary Journal of Nonlinear Science
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1063/1.1530990
   - Count: 281 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `byte entropy randomness compression`
   - Relevance: Relevant to whole-file symbol entropy, information theory, entropy coding, or compressibility.
4. Algorithmic randomness and physical entropy
   - Authors: W. H. Zurek
   - Year: 1989
   - Venue/publisher: Physical Review A
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1103/physreva.40.4731
   - Count: 234 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `byte entropy randomness compression`
   - Relevance: Relevant to whole-file symbol entropy, information theory, entropy coding, or compressibility.
5. Entropy and data compression schemes
   - Authors: D.S. Ornstein, B. Weiss
   - Year: 1993
   - Venue/publisher: IEEE Transactions on Information Theory
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1109/18.179344
   - Count: 206 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `Shannon entropy information theory data compression`
   - Relevance: Relevant to whole-file symbol entropy, information theory, entropy coding, or compressibility.
6. Entropy, Relative Entropy and Mutual Information
   - Authors: Thomas M. Cover, Joy A. Thomas
   - Year: 2001
   - Venue/publisher: Elements of Information Theory
   - Type: other
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1002/0471200611.ch2
   - Count: 95 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `information entropy entropy coding compression`
   - Relevance: Relevant to whole-file symbol entropy, information theory, entropy coding, or compressibility.
   - Metadata enrichment: Publisher/venue metadata manually verified on 2026-07-01.
7. Information entropy
   - Authors: J. A. N��ez, P. M. Cincotta, F. C. Wachlin
   - Year: 1996
   - Venue/publisher: CELESTIAL MECHANICS AND DYNAMICAL ASTRONOMY
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1007/bf00051604
   - Count: 85 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `information entropy entropy coding compression`
   - Relevance: Relevant to whole-file symbol entropy, information theory, entropy coding, or compressibility.
8. Entropy, Relative Entropy, and Mutual Information
   - Authors: Thomas M. Cover, Joy A. Thomas
   - Year: 2005
   - Venue/publisher: Elements of Information Theory
   - Type: other
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1002/047174882x.ch2
   - Count: 82 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `information entropy entropy coding compression`
   - Relevance: Relevant to whole-file symbol entropy, information theory, entropy coding, or compressibility.
   - Metadata enrichment: Publisher/venue metadata manually verified on 2026-07-01.
9. Context-based entropy coding of block transform coefficients for image compression
   - Authors: C. Tu, T.D. Tran
   - Year: 2002
   - Venue/publisher: IEEE Transactions on Image Processing
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1109/tip.2002.804279
   - Count: 80 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `information entropy entropy coding compression`
   - Relevance: Relevant to whole-file symbol entropy, information theory, entropy coding, or compressibility.
10. Shannon information entropy for an infinite circular well
   - Authors: Xu-Dong Song, Guo-Hua Sun, Shi-Hai Dong
   - Year: 2015
   - Venue/publisher: Physics Letters A
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1016/j.physleta.2015.03.020
   - Count: 74 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `Shannon entropy information theory data compression`
   - Relevance: Relevant to whole-file symbol entropy, information theory, entropy coding, or compressibility.

### Rejected high-count candidates

- Entanglement Entropy at Infinite-Randomness Fixed Points in Higher Dimensions (2007); 73 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Shannon Entropy and Mutual Information for Multivariate Skew‐Elliptical Distributions (2013); 72 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Efficient context-based entropy coding for lossy wavelet image compression (None); 72 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Global Seismic Nowcasting With Shannon Information Entropy (2019); 67 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Conditional Entropy Coding for Efficient Video Compression (2020); 58 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Measuring information content from observations for data assimilation: relative entropy versus shannon entropy difference (2007); 51 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Analysis of the entropy randomness index for machining chatter detection (2012); 47 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Chains, entropy, coding (1986); 44 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Approximate entropy for testing randomness (2000); 35 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Shannon information entropy in the canonical genetic code (2017); 34 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.

## Chi-square byte-frequency deviation

Search aliases: chi-square test, frequency test, byte frequency uniformity, randomness test

Queries:
- `chi-square test randomness frequency distribution`
- `byte frequency chi-square randomness test`
- `statistical tests random number generators chi-square`

### Selected sources

1. The Chi-square test of independence
   - Authors: Mary L. McHugh
   - Year: 2013
   - Venue/publisher: Biochemia Medica
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.11613/bm.2013.018
   - Count: 2180 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `byte frequency chi-square randomness test`
   - Relevance: Relevant to chi-square frequency deviation or statistical randomness testing.
2. The Chi-Square Test
   - Authors: Todd Michael Franke, Timothy Ho, Christina A. Christie
   - Year: 2012
   - Venue/publisher: American Journal of Evaluation
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1177/1098214011426594
   - Count: 401 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `chi-square test randomness frequency distribution`
   - Relevance: Relevant to chi-square frequency deviation or statistical randomness testing.
3. The chi-square test
   - Authors: Nikolaos Pandis
   - Year: 2016
   - Venue/publisher: American Journal of Orthodontics and Dentofacial Orthopedics
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1016/j.ajodo.2016.08.009
   - Count: 139 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `chi-square test randomness frequency distribution`
   - Relevance: Relevant to chi-square frequency deviation or statistical randomness testing.
4. Karl Pearsons chi-square tests
   - Authors: Sölpük Turhan Nihan
   - Year: 2020
   - Venue/publisher: Educational Research and Reviews
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.5897/err2019.3817
   - Count: 117 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `statistical tests random number generators chi-square`
   - Relevance: Relevant to chi-square frequency deviation or statistical randomness testing.
5. Chi-Square Test
   - Authors: Ronald J. Tallarida, Rodney B. Murray
   - Year: 1987
   - Venue/publisher: Manual of Pharmacologic Calculations
   - Type: book-chapter
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1007/978-1-4612-4974-0_43
   - Count: 103 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `chi-square test randomness frequency distribution`
   - Relevance: Relevant to chi-square frequency deviation or statistical randomness testing.
6. On the Limiting Power Function of the Frequency Chi-Square Test
   - Authors: Sujit Kumar Mitra
   - Year: 1958
   - Venue/publisher: The Annals of Mathematical Statistics
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1214/aoms/1177706453
   - Count: 56 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `byte frequency chi-square randomness test`
   - Relevance: Relevant to chi-square frequency deviation or statistical randomness testing.
7. Chi-Square Tests
   - Authors: Karl L. Wuensch
   - Year: 2011
   - Venue/publisher: International Encyclopedia of Statistical Science
   - Type: book-chapter
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1007/978-3-642-04898-2_173
   - Count: 27 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `statistical tests random number generators chi-square`
   - Relevance: Relevant to chi-square frequency deviation or statistical randomness testing.
8. Chi-square Test
   - Authors: Selim Kilic
   - Year: 2016
   - Venue/publisher: Journal of Mood Disorders
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.5455/jmood.20160803110534
   - Count: 20 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `chi-square test randomness frequency distribution`
   - Relevance: Relevant to chi-square frequency deviation or statistical randomness testing.
9. Adaptive chi-square tests
   - Authors: Yu. I. Ingster
   - Year: 2000
   - Venue/publisher: Journal of Mathematical Sciences
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1007/bf02673632
   - Count: 16 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `statistical tests random number generators chi-square`
   - Relevance: Relevant to chi-square frequency deviation or statistical randomness testing.
10. Chi-Square Test
   - Authors: Randall Schumacker, Sara Tomek
   - Year: 2013
   - Venue/publisher: Understanding Statistics Using R
   - Type: book-chapter
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1007/978-1-4614-6227-9_8
   - Count: 8 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `chi-square test randomness frequency distribution`
   - Relevance: Relevant to chi-square frequency deviation or statistical randomness testing.

### Rejected high-count candidates

- Robustness of Frequency Chi-Square (1970); 7 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- A Sequential Chi-Square Test (1985); 7 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- The Tukey Chi-Square Test (1965); 7 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- The chi-square test for independence (1997); 7 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Chi-Square Test of Significance (2023); 6 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Chi-Square Test (None); 5 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- The Chi-Square Test (2006); 5 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Chi-Square Test (None); 4 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Chi-square test (2001); 4 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Chi-Square Test (1982); 3 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.

## Monte Carlo pi estimate

Search aliases: Monte Carlo pi, Monte Carlo method, randomness pi estimate

Queries:
- `Monte Carlo method pi estimation randomness`
- `Monte Carlo test random number generators pi`
- `statistical randomness tests Monte Carlo pi`

### Selected sources

1. Monte Carlo Statistical Methods
   - Authors: Christian P. Robert, George Casella
   - Year: 2004
   - Venue/publisher: Springer Texts in Statistics
   - Type: book
   - Canonical non-paper source: yes
   - DOI/URL: https://doi.org/10.1007/978-1-4757-4145-2
   - Count: 3232 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `statistical randomness tests Monte Carlo pi`
   - Relevance: Relevant to Monte Carlo estimation, pi-based randomness checks, or pseudo-randomness evaluation. Included as a canonical book-length treatment of the metric family.
2. Random Number Generation and Quasi-Monte Carlo Methods
   - Authors: Harald Niederreiter
   - Year: 1992
   - Venue/publisher: Society for Industrial and Applied Mathematics
   - Type: monograph
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1137/1.9781611970081
   - Count: 2084 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `Monte Carlo test random number generators pi`
   - Relevance: Relevant to Monte Carlo estimation, pi-based randomness checks, or pseudo-randomness evaluation.
3. Monte Carlo Statistical Methods
   - Authors: Christian P. Robert, George Casella
   - Year: 1999
   - Venue/publisher: Springer Texts in Statistics
   - Type: book
   - Canonical non-paper source: yes
   - DOI/URL: https://doi.org/10.1007/978-1-4757-3071-5
   - Count: 1374 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `statistical randomness tests Monte Carlo pi`
   - Relevance: Relevant to Monte Carlo estimation, pi-based randomness checks, or pseudo-randomness evaluation. Included as a canonical book-length treatment of the metric family.
4. Monte Carlo Methods in Statistical Physics
   - Authors: M E J Newman, G T Barkema
   - Year: 1999
   - Venue/publisher: Oxford University PressOxford
   - Type: book
   - Canonical non-paper source: yes
   - DOI/URL: https://doi.org/10.1093/oso/9780198517962.001.0001
   - Count: 1323 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `statistical randomness tests Monte Carlo pi`
   - Relevance: Relevant to Monte Carlo estimation, pi-based randomness checks, or pseudo-randomness evaluation. Included as a canonical book-length treatment of the metric family.
5. Monte Carlo Simulation in Statistical Physics
   - Authors: Kurt Binder, Dieter W. Heermann
   - Year: 2010
   - Venue/publisher: Graduate Texts in Physics
   - Type: book
   - Canonical non-paper source: yes
   - DOI/URL: https://doi.org/10.1007/978-3-642-03163-2
   - Count: 329 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `statistical randomness tests Monte Carlo pi`
   - Relevance: Relevant to Monte Carlo estimation, pi-based randomness checks, or pseudo-randomness evaluation. Included as a canonical book-length treatment of the metric family.
6. Monte Carlo simulations: Hidden errors from ‘‘good’’ random number generators
   - Authors: Alan M. Ferrenberg, D. P. Landau, Y. Joanna Wong
   - Year: 1992
   - Venue/publisher: Physical Review Letters
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1103/physrevlett.69.3382
   - Count: 318 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `Monte Carlo test random number generators pi`
   - Relevance: Relevant to Monte Carlo estimation, pi-based randomness checks, or pseudo-randomness evaluation.
7. Monte Carlo Simulation in Statistical Physics
   - Authors: Kurt Binder, Dieter W. Heermann
   - Year: 1992
   - Venue/publisher: Springer Series in Solid-State Sciences
   - Type: book
   - Canonical non-paper source: yes
   - DOI/URL: https://doi.org/10.1007/978-3-662-30273-6
   - Count: 297 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `statistical randomness tests Monte Carlo pi`
   - Relevance: Relevant to Monte Carlo estimation, pi-based randomness checks, or pseudo-randomness evaluation. Included as a canonical book-length treatment of the metric family.
8. Monte Carlo Methods in Statistical Physics
   - Authors: Kurt Binder
   - Year: 1986
   - Venue/publisher: Topics in Current Physics
   - Type: book
   - Canonical non-paper source: yes
   - DOI/URL: https://doi.org/10.1007/978-3-642-82803-4
   - Count: 285 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `statistical randomness tests Monte Carlo pi`
   - Relevance: Relevant to Monte Carlo estimation, pi-based randomness checks, or pseudo-randomness evaluation. Included as a canonical book-length treatment of the metric family.
   - Metadata enrichment: Publisher/venue metadata manually verified on 2026-07-01.
9. Uncertainty estimation and Monte Carlo simulation method
   - Authors: Christos E. Papadopoulos, Hoi Yeung
   - Year: 2001
   - Venue/publisher: Flow Measurement and Instrumentation
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1016/s0955-5986(01)00015-2
   - Count: 240 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `Monte Carlo method pi estimation randomness`
   - Relevance: Relevant to Monte Carlo estimation, pi-based randomness checks, or pseudo-randomness evaluation.
10. Monte Carlo Simulation in Statistical Physics
   - Authors: Kurt Binder, Dieter W. Heermann
   - Year: 2002
   - Venue/publisher: Springer Series in Solid-State Sciences
   - Type: book
   - Canonical non-paper source: yes
   - DOI/URL: https://doi.org/10.1007/978-3-662-04685-2
   - Count: 236 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `statistical randomness tests Monte Carlo pi`
   - Relevance: Relevant to Monte Carlo estimation, pi-based randomness checks, or pseudo-randomness evaluation. Included as a canonical book-length treatment of the metric family.

### Rejected high-count candidates

- Monte Carlo Simulation in Statistical Physics (1997); 196 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Random Number Generation and Monte Carlo Methods (1998); 189 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- ANALYSIS OF RANDOM NUMBER GENERATORS USING MONTE CARLO SIMULATION (1994); 68 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Tests of the multi-spin-coding technique in Monte Carlo simulations of statistical systems (1981); 67 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Monte Carlo simulation and random number generation (1988); 54 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Monte Carlo method in nonlinear statistical optics (1996); 52 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Monte Carlo Simulation in Statistical Physics (2019); 48 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Monte Carlo method in nonlinear statistical optics (1996); 39 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Quality of random number generators significantly affects results of Monte Carlo simulations for organic and biological systems (2011); 37 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Physically Transient True Random Number Generators Based on Paired Threshold Switches Enabling Monte Carlo Method Applications (2019); 33 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.

## Serial correlation coefficient

Search aliases: serial correlation, autocorrelation, lag one correlation, dependence test

Queries:
- `serial correlation test random number generators`
- `autocorrelation statistical test sequence randomness`
- `serial dependence information sequence compression`

### Selected sources

1. Quantum random number generators
   - Authors: Miguel Herrero-Collantes, Juan Carlos Garcia-Escartin
   - Year: 2017
   - Venue/publisher: Reviews of Modern Physics
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1103/revmodphys.89.015004
   - Count: 670 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `serial correlation test random number generators`
   - Relevance: Relevant to adjacent-symbol dependence, serial correlation, autocorrelation, or randomness testing.
2. A TEST FOR RANDOMNESS OF DIRECTIONS
   - Authors: G. S. Watson
   - Year: 1956
   - Venue/publisher: Geophysical Journal International
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1111/j.1365-246x.1956.tb05561.x
   - Count: 296 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `autocorrelation statistical test sequence randomness`
   - Relevance: Relevant to adjacent-symbol dependence, serial correlation, autocorrelation, or randomness testing.
3. Uniform Random Number Generators
   - Authors: M. Donald MacLaren, George Marsaglia
   - Year: 1965
   - Venue/publisher: Journal of the ACM
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1145/321250.321257
   - Count: 168 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `serial correlation test random number generators`
   - Relevance: Relevant to adjacent-symbol dependence, serial correlation, autocorrelation, or randomness testing.
4. Random Number Generators
   - Authors: T. E. Hull, A. R. Dobell
   - Year: 1962
   - Venue/publisher: SIAM Review
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1137/1004061
   - Count: 165 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `serial correlation test random number generators`
   - Relevance: Relevant to adjacent-symbol dependence, serial correlation, autocorrelation, or randomness testing.
5. Gaussian random number generators
   - Authors: David B. Thomas, Wayne Luk, Philip H.W. Leong, John D. Villasenor
   - Year: 2007
   - Venue/publisher: ACM Computing Surveys
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1145/1287620.1287622
   - Count: 154 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `serial correlation test random number generators`
   - Relevance: Relevant to adjacent-symbol dependence, serial correlation, autocorrelation, or randomness testing.
6. The strict avalanche criterion randomness test
   - Authors: Julio Cesar Hernandez Castro, José María Sierra, Andre Seznec, Antonio Izquierdo, Arturo Ribagorda
   - Year: 2005
   - Venue/publisher: Mathematics and Computers in Simulation
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1016/j.matcom.2004.09.001
   - Count: 100 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `autocorrelation statistical test sequence randomness`
   - Relevance: Relevant to adjacent-symbol dependence, serial correlation, autocorrelation, or randomness testing.
7. Random Number Generators
   - Authors: George Marsaglia
   - Year: 2003
   - Venue/publisher: Journal of Modern Applied Statistical Methods
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.22237/jmasm/1051747320
   - Count: 97 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `serial correlation test random number generators`
   - Relevance: Relevant to adjacent-symbol dependence, serial correlation, autocorrelation, or randomness testing.
8. True Random Number Generators
   - Authors: Mario Stipčević, Çetin Kaya Koç
   - Year: 2014
   - Venue/publisher: Open Problems in Mathematics and Computational Science
   - Type: book-chapter
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1007/978-3-319-10683-0_12
   - Count: 95 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `serial correlation test random number generators`
   - Relevance: Relevant to adjacent-symbol dependence, serial correlation, autocorrelation, or randomness testing.
9. A joint test for serial correlation and random individual effects
   - Authors: Badi H. Baltagi, Qi Li
   - Year: 1991
   - Venue/publisher: Statistics &amp; Probability Letters
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1016/0167-7152(91)90156-l
   - Count: 83 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `serial correlation test random number generators`
   - Relevance: Relevant to adjacent-symbol dependence, serial correlation, autocorrelation, or randomness testing.
10. Spatial autocorrelation and statistical tests: Some solutions
   - Authors: Mark R. T. Dale, Marie-Josée Fortin
   - Year: 2009
   - Venue/publisher: Journal of Agricultural, Biological, and Environmental Statistics
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1198/jabes.2009.0012
   - Count: 68 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `autocorrelation statistical test sequence randomness`
   - Relevance: Relevant to adjacent-symbol dependence, serial correlation, autocorrelation, or randomness testing.

### Rejected high-count candidates

- Portable Random Number Generators (1992); 52 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- On the independence of statistical randomness tests included in the NIST test suite (2017); 43 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Testing random number generators (1992); 38 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Sparse Serial Tests of Uniformity for Random Number Generators (2002); 35 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Biometric random number generators (2004); 34 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Compound Random Number Generators (1987); 30 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- A Test for Randomness (1976); 30 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- LINEAR AND QUADRATIC SERIAL RANK TESTS FOR RANDOMNESS AGAINST SERIAL DEPENDENCE (1987); 28 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Testing for randomness against autocorrelation: Alternative tests (1977); 27 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Note on a Proposed Test for Random Number Generators (1985); 26 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.

## Conditional entropy

Search aliases: conditional entropy, entropy rate, Markov entropy, sequence predictability

Queries:
- `conditional entropy sequence prediction information theory`
- `entropy rate Markov source data compression`
- `conditional entropy compression predictability`

Ambiguity notes:
- Conditional entropy sources may overlap with entropy-rate literature.

### Selected sources

1. Data Compression Using Dynamic Markov Modelling
   - Authors: G. V. Cormack, R. N. S. Horspool
   - Year: 1987
   - Venue/publisher: The Computer Journal
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1093/comjnl/30.6.541
   - Count: 139 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `entropy rate Markov source data compression`
   - Relevance: Relevant to conditional entropy, entropy rate, local predictability, or Markov-source compression.
2. Topological conditional entropy
   - Authors: Michał Misiurewicz
   - Year: 1976
   - Venue/publisher: Studia Mathematica
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.4064/sm-55-2-175-200
   - Count: 106 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `conditional entropy sequence prediction information theory`
   - Relevance: Relevant to conditional entropy, entropy rate, local predictability, or Markov-source compression.
3. The Conditional Entropy Bottleneck
   - Authors: Ian Fischer
   - Year: 2020
   - Venue/publisher: Entropy
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.3390/e22090999
   - Count: 66 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `conditional entropy sequence prediction information theory`
   - Relevance: Relevant to conditional entropy, entropy rate, local predictability, or Markov-source compression.
4. Using conditional entropy to identify periodicity
   - Authors: Matthew J. Graham, Andrew J. Drake, S. G. Djorgovski, Ashish A. Mahabal, Ciro Donalek
   - Year: 2013
   - Venue/publisher: Monthly Notices of the Royal Astronomical Society
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1093/mnras/stt1206
   - Count: 61 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `conditional entropy compression predictability`
   - Relevance: Relevant to conditional entropy, entropy rate, local predictability, or Markov-source compression.
5. Conditional Entropy Coding for Efficient Video Compression
   - Authors: Jerry Liu, Shenlong Wang, Wei-Chiu Ma, Meet Shah, Rui Hu, Pranaab Dhawan, Raquel Urtasun
   - Year: 2020
   - Venue/publisher: Lecture Notes in Computer Science
   - Type: book-chapter
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1007/978-3-030-58520-4_27
   - Count: 58 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `conditional entropy compression predictability`
   - Relevance: Relevant to conditional entropy, entropy rate, local predictability, or Markov-source compression.
6. Residual entropy, conditional entropy and subshift covers
   - Authors: Mike Boyle, Doris Fiebig, Ulf Fiebig
   - Year: 2002
   - Venue/publisher: Forum Mathematicum
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1515/form.2002.031
   - Count: 56 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `conditional entropy compression predictability`
   - Relevance: Relevant to conditional entropy, entropy rate, local predictability, or Markov-source compression.
7. Attribute reduction via local conditional entropy
   - Authors: Yibo Wang, Xiangjian Chen, Kai Dong
   - Year: 2019
   - Venue/publisher: International Journal of Machine Learning and Cybernetics
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1007/s13042-019-00948-z
   - Count: 56 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `conditional entropy compression predictability`
   - Relevance: Relevant to conditional entropy, entropy rate, local predictability, or Markov-source compression.
8. Analyticity of Entropy Rate of Hidden Markov Chains
   - Authors: Guangyue Han, Brian Marcus
   - Year: 2006
   - Venue/publisher: IEEE Transactions on Information Theory
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1109/tit.2006.885481
   - Count: 47 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `entropy rate Markov source data compression`
   - Relevance: Relevant to conditional entropy, entropy rate, local predictability, or Markov-source compression.
9. ECG compression using uniform scalar dead-zone quantization and conditional entropy coding
   - Authors: Jianhua Chen, Fuyan Wang, Yufeng Zhang, Xinling Shi
   - Year: 2008
   - Venue/publisher: Medical Engineering &amp; Physics
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1016/j.medengphy.2007.06.008
   - Count: 43 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `conditional entropy compression predictability`
   - Relevance: Relevant to conditional entropy, entropy rate, local predictability, or Markov-source compression.
10. Blind Source Separation by Entropy Rate Minimization
   - Authors: Geng-Shen Fu, Ronald Phlypo, Matthew Anderson, Xi-Lin Li, T ü lay Adal ı
   - Year: 2014
   - Venue/publisher: IEEE Transactions on Signal Processing
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1109/tsp.2014.2333563
   - Count: 39 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `entropy rate Markov source data compression`
   - Relevance: Relevant to conditional entropy, entropy rate, local predictability, or Markov-source compression.

### Rejected high-count candidates

- Conditional Entropy (1999); 37 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Conditional Entropy-Based Evaluation of Information Dynamics in Physiological Systems (2014); 33 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Relative entropy between Markov transition rate matrices (1993); 32 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- New bounds on the entropy rate of hidden Markov processes (None); 32 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Visual Saliency Based on Conditional Entropy (2010); 30 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Order estimation and sequential universal data compression of a hidden Markov source by the method of mixtures (1994); 29 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Relative Entropy Rate Based Multiple Hidden Markov Model Approximation (2010); 25 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Localization performance quantification by conditional entropy (2015); 24 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Witnessing negative conditional entropy (2021); 19 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Conditional entropy of some automatic sequences (1994); 19 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.

## n-gram entropy

Search aliases: n-gram entropy, block entropy, sequence entropy, language entropy

Queries:
- `n-gram entropy sequence prediction compression`
- `block entropy information theory sequence`
- `entropy of n-grams compression`

Ambiguity notes:
- n-gram entropy is treated as block/sequence entropy, not unigram byte entropy.

Fetch errors:
- fetch_crossref for `n-gram entropy sequence prediction compression`: HTTP 500

### Selected sources

1. Entropy and data compression schemes
   - Authors: D.S. Ornstein, B. Weiss
   - Year: 1993
   - Venue/publisher: IEEE Transactions on Information Theory
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1109/18.179344
   - Count: 206 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `entropy of n-grams compression`
   - Relevance: Relevant to entropy over length-n sequences, block entropy, or repeated local patterns.
2. Topological Sequence Entropy
   - Authors: T. N. T. Goodman
   - Year: 1974
   - Venue/publisher: Proceedings of the London Mathematical Society
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1112/plms/s3-29.2.331
   - Count: 87 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `block entropy information theory sequence`
   - Relevance: Relevant to entropy over length-n sequences, block entropy, or repeated local patterns.
3. Epsilon Entropy and Data Compression
   - Authors: Edward C. Posner, Eugene R. Rodemich
   - Year: 1971
   - Venue/publisher: The Annals of Mathematical Statistics
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1214/aoms/1177693077
   - Count: 33 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `entropy of n-grams compression`
   - Relevance: Relevant to entropy over length-n sequences, block entropy, or repeated local patterns.
4. Sequence entropy and mixing
   - Authors: Alan Saleski
   - Year: 1977
   - Venue/publisher: Journal of Mathematical Analysis and Applications
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1016/0022-247x(77)90047-6
   - Count: 18 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `block entropy information theory sequence`
   - Relevance: Relevant to entropy over length-n sequences, block entropy, or repeated local patterns.
5. Mixing via sequence entropy
   - Authors: Wen Huang, Song Shao, Xiangdong Ye
   - Year: 2005
   - Venue/publisher: Contemporary Mathematics
   - Type: other
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1090/conm/385/07193
   - Count: 18 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `block entropy information theory sequence`
   - Relevance: Relevant to entropy over length-n sequences, block entropy, or repeated local patterns.
6. SOME RESULTS ON ENTROPY AND SEQUENCE ENTROPY
   - Authors: F. BALIBREA, V. JIMÉNEZ LÓPEZ, J. S. CÁNOVAS PEÑA
   - Year: 1999
   - Venue/publisher: International Journal of Bifurcation and Chaos
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1142/s0218127499001218
   - Count: 14 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `block entropy information theory sequence`
   - Relevance: Relevant to entropy over length-n sequences, block entropy, or repeated local patterns.
7. On sequence entropy. I.
   - Authors: D. Newton
   - Year: 1970
   - Venue/publisher: Mathematical Systems Theory
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1007/bf01691095
   - Count: 14 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `block entropy information theory sequence`
   - Relevance: Relevant to entropy over length-n sequences, block entropy, or repeated local patterns.
8. Zero sequence entropy and entropy dimension
   - Authors: Yixiao Qiao, Xiaoyao Zhou
   - Year: 2017
   - Venue/publisher: Discrete and Continuous Dynamical Systems
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.3934/dcds.2017018
   - Count: 8 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `block entropy information theory sequence`
   - Relevance: Relevant to entropy over length-n sequences, block entropy, or repeated local patterns.
9. On sequence entropy. II.
   - Authors: D. Newton
   - Year: 1970
   - Venue/publisher: Mathematical Systems Theory
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1007/bf01691096
   - Count: 5 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `block entropy information theory sequence`
   - Relevance: Relevant to entropy over length-n sequences, block entropy, or repeated local patterns.
10. Quantifying complex network information based on communicability sequence entropy
   - Authors: SHI DanDan, CHEN Dan, LONG HuiMin, WANG ChengKe, PAN GuiJun
   - Year: 2019
   - Venue/publisher: SCIENTIA SINICA Physica, Mechanica &amp; Astronomica
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1360/sspma-2019-0029
   - Count: 4 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `block entropy information theory sequence`
   - Relevance: Relevant to entropy over length-n sequences, block entropy, or repeated local patterns.

### Rejected high-count candidates

- Weighted Sequence Entropy and Maximal Pattern Entropy (2025); 3 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- ?-Entropy data compression (1992); 0 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Data Compression and Entropy (1991); 0 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Entropy and data compression performances (None); 0 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- The role of relative entropy in quantum information theory (2002); 935 via Crossref is-referenced-by-count: Rejected by the metric-specific title relevance gate.
- Entropy and Information Theory (2011); 563 via Crossref is-referenced-by-count: Rejected by the metric-specific title relevance gate.
- Entropy and Information Theory (1990); 509 via Crossref is-referenced-by-count: Rejected by the metric-specific title relevance gate.
- THE INFORMATION ENTROPY, ROUGH ENTROPY AND KNOWLEDGE GRANULATION IN ROUGH SET THEORY (2004); 292 via Crossref is-referenced-by-count: Rejected by the metric-specific title relevance gate.
- Maximum information entropy: a foundation for ecological theory (2014); 230 via Crossref is-referenced-by-count: Rejected by the metric-specific title relevance gate.
- Tsallis' entropy, Ehrenfest theorem and information theory (1993); 183 via Crossref is-referenced-by-count: Rejected by the metric-specific title relevance gate.

## Lempel-Ziv complexity

Search aliases: Lempel Ziv complexity, LZ complexity, Lempel-Ziv parsing, dictionary compression

Queries:
- `Lempel Ziv complexity data compression`
- `Lempel Ziv parsing complexity sequence`
- `universal algorithm sequential data compression Lempel Ziv`

### Selected sources

1. Estimating the Entropy Rate of Spike Trains via Lempel-Ziv Complexity
   - Authors: José M. Amigó, Janusz Szczepański, Elek Wajnryb, Maria V. Sanchez-Vives
   - Year: 2004
   - Venue/publisher: Neural Computation
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1162/089976604322860677
   - Count: 137 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `Lempel Ziv parsing complexity sequence`
   - Relevance: Relevant to Lempel-Ziv complexity, parsing, universal compression, or dictionary compression.
2. A permutation Lempel-Ziv complexity measure for EEG analysis
   - Authors: Yang Bai, Zhenhu Liang, Xiaoli Li
   - Year: 2015
   - Venue/publisher: Biomedical Signal Processing and Control
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1016/j.bspc.2015.04.002
   - Count: 103 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `Lempel Ziv parsing complexity sequence`
   - Relevance: Relevant to Lempel-Ziv complexity, parsing, universal compression, or dictionary compression.
3. Quantifying physiological data with Lempel-Ziv complexity-certain issues
   - Authors: R. Nagarajan
   - Year: 2002
   - Venue/publisher: IEEE Transactions on Biomedical Engineering
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1109/tbme.2002.804582
   - Count: 86 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `Lempel Ziv complexity data compression`
   - Relevance: Relevant to Lempel-Ziv complexity, parsing, universal compression, or dictionary compression.
4. Multiscale Lempel–Ziv complexity for EEG measures
   - Authors: Antonio J. Ibáñez-Molina, Sergio Iglesias-Parro, María F. Soriano, José I. Aznarte
   - Year: 2015
   - Venue/publisher: Clinical Neurophysiology
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1016/j.clinph.2014.07.012
   - Count: 81 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `Lempel Ziv complexity data compression`
   - Relevance: Relevant to Lempel-Ziv complexity, parsing, universal compression, or dictionary compression.
5. Lempel–Ziv complexity in schizophrenia: A MEG study
   - Authors: Alberto Fernández, María-Inés López-Ibor, Agustín Turrero, Juan-Matías Santos, María-Dolores Morón, Roberto Hornero, Carlos Gómez, María Andreina Méndez, Tomás Ortiz, Juan José López-Ibor
   - Year: 2011
   - Venue/publisher: Clinical Neurophysiology
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1016/j.clinph.2011.04.011
   - Count: 80 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `Lempel Ziv complexity data compression`
   - Relevance: Relevant to Lempel-Ziv complexity, parsing, universal compression, or dictionary compression.
6. Compression of Low Entropy Strings with Lempel--Ziv Algorithms
   - Authors: S. Rao Kosaraju, Giovanni Manzini
   - Year: 2000
   - Venue/publisher: SIAM Journal on Computing
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1137/s0097539797331105
   - Count: 68 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `universal algorithm sequential data compression Lempel Ziv`
   - Relevance: Relevant to Lempel-Ziv complexity, parsing, universal compression, or dictionary compression.
7. Asymptotic behavior of the Lempel-Ziv parsing scheme and digital search trees
   - Authors: Philippe Jacquet, Wojciech Szpankowski
   - Year: 1995
   - Venue/publisher: Theoretical Computer Science
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1016/0304-3975(94)00298-w
   - Count: 62 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `Lempel Ziv parsing complexity sequence`
   - Relevance: Relevant to Lempel-Ziv complexity, parsing, universal compression, or dictionary compression.
8. Redundancy of the Lempel-Ziv incremental parsing rule
   - Authors: S.A. Savari
   - Year: 1997
   - Venue/publisher: IEEE Transactions on Information Theory
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1109/18.567642
   - Count: 60 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `Lempel Ziv parsing complexity sequence`
   - Relevance: Relevant to Lempel-Ziv complexity, parsing, universal compression, or dictionary compression.
9. An extremely fast Ziv-Lempel data compression algorithm
   - Authors: R.N. Williams
   - Year: 1991
   - Venue/publisher: [1991] Proceedings. Data Compression Conference
   - Type: proceedings-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1109/dcc.1991.213344
   - Count: 57 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `Lempel Ziv complexity data compression`
   - Relevance: Relevant to Lempel-Ziv complexity, parsing, universal compression, or dictionary compression.
   - Metadata enrichment: Publisher/venue metadata manually verified on 2026-07-01.
10. Simple universal lossy data compression schemes derived from the Lempel-Ziv algorithm
   - Authors: En-hui Yang, J.C. Kieffer
   - Year: 1996
   - Venue/publisher: IEEE Transactions on Information Theory
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1109/18.481794
   - Count: 56 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `Lempel Ziv complexity data compression`
   - Relevance: Relevant to Lempel-Ziv complexity, parsing, universal compression, or dictionary compression.

### Rejected high-count candidates

- High-speed VLSI designs for Lempel-Ziv-based data compression (1993); 51 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Application of Lempel–Ziv complexity to the analysis of neural discharges (2003); 51 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Fixed data base version of the Lempel-Ziv data compression algorithm (1991); 49 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Permutation Lempel–Ziv complexity measure of electroencephalogram in GABAergic anaesthetics (2015); 41 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- On Lempel–Ziv complexity for multidimensional data analysis (2005); 40 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- A Lempel–Ziv complexity measure for muscle fatigue estimation (2011); 40 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Normalized Lempel-Ziv complexity and its application in bio-sequence analysis (2009); 39 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Using Lempel–Ziv Complexity to Assess ECG Signal Quality (2016); 35 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Characterizing spike trains with Lempel–Ziv complexity (2004); 32 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- On the Nonlinear Complexity and Lempel–Ziv Complexity of Finite Length Sequences (2007); 32 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.

## Section-size ratios

Search aliases: executable section size, PE section layout, ELF section layout, binary layout features

Queries:
- `executable section size ratio binary analysis`
- `PE file section size features malware detection`
- `ELF section layout binary analysis`

Ambiguity notes:
- Sparse direct literature is expected; binary-layout and executable-feature papers are acceptable fallback evidence.

### Selected sources

1. An intelligent PE-malware detection system based on association mining
   - Authors: Yanfang Ye, Dingding Wang, Tao Li, Dongyi Ye, Qingshan Jiang
   - Year: 2008
   - Venue/publisher: Journal in Computer Virology
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1007/s11416-008-0082-4
   - Count: 145 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `PE file section size features malware detection`
   - Relevance: Relevant to executable section layout, section-size features, or binary structural analysis.
2. Unsupervised Anomaly-Based Malware Detection Using Hardware Features
   - Authors: Adrian Tang, Simha Sethumadhavan, Salvatore J. Stolfo
   - Year: 2014
   - Venue/publisher: Lecture Notes in Computer Science
   - Type: book-chapter
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1007/978-3-319-11379-1_6
   - Count: 145 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `PE file section size features malware detection`
   - Relevance: Relevant to executable section layout, section-size features, or binary structural analysis.
3. Behavior-based features model for malware detection
   - Authors: Hisham Shehata Galal, Yousef Bassyouni Mahdy, Mohammed Ali Atiea
   - Year: 2016
   - Venue/publisher: Journal of Computer Virology and Hacking Techniques
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1007/s11416-015-0244-0
   - Count: 134 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `PE file section size features malware detection`
   - Relevance: Relevant to executable section layout, section-size features, or binary structural analysis.
4. Learning the PE Header, Malware Detection with Minimal Domain Knowledge
   - Authors: Edward Raff, Jared Sylvester, Charles Nicholas
   - Year: 2017
   - Venue/publisher: Proceedings of the 10th ACM Workshop on Artificial Intelligence and Security
   - Type: proceedings-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1145/3128572.3140442
   - Count: 104 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `PE file section size features malware detection`
   - Relevance: Relevant to executable section layout, section-size features, or binary structural analysis.
5. N-GRAMS-BASED FILE SIGNATURES FOR MALWARE DETECTION
   - Authors: Igor Santos, Yoseba K. Penya, Jaime Devesa, Pablo G. Bringas
   - Year: 2009
   - Venue/publisher: Proceedings of the 11th International Conference on Enterprise Information
   - Type: proceedings-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.5220/0001863603170320
   - Count: 95 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `PE file section size features malware detection`
   - Relevance: Relevant to executable section layout, section-size features, or binary structural analysis.
6. Malware detection using statistical analysis of byte-level file content
   - Authors: S. Momina Tabish, M. Zubair Shafiq, Muddassar Farooq
   - Year: 2009
   - Venue/publisher: Proceedings of the ACM SIGKDD Workshop on CyberSecurity and Intelligence Informatics
   - Type: proceedings-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1145/1599272.1599278
   - Count: 91 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `PE file section size features malware detection`
   - Relevance: Relevant to executable section layout, section-size features, or binary structural analysis.
7. Windows PE Malware Detection Using Ensemble Learning
   - Authors: Nureni Ayofe Azeez, Oluwanifise Ebunoluwa Odufuwa, Sanjay Misra, Jonathan Oluranti, Robertas Damaševičius
   - Year: 2021
   - Venue/publisher: Informatics
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.3390/informatics8010010
   - Count: 86 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `PE file section size features malware detection`
   - Relevance: Relevant to executable section layout, section-size features, or binary structural analysis.
8. Alias analysis of executable code
   - Authors: Saumya Debray, Robert Muth, Matthew Weippert
   - Year: 1998
   - Venue/publisher: Proceedings of the 25th ACM SIGPLAN-SIGACT symposium on Principles of programming languages  - POPL '98
   - Type: proceedings-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1145/268946.268948
   - Count: 85 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `executable section size ratio binary analysis`
   - Relevance: Relevant to executable section layout, section-size features, or binary structural analysis.
9. Combining file content and file relations for cloud based malware detection
   - Authors: Yanfang Ye, Tao Li, Shenghuo Zhu, Weiwei Zhuang, Egemen Tas, Umesh Gupta, Melih Abdulhayoglu
   - Year: 2011
   - Venue/publisher: Proceedings of the 17th ACM SIGKDD international conference on Knowledge discovery and data mining
   - Type: proceedings-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1145/2020408.2020448
   - Count: 62 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `PE file section size features malware detection`
   - Relevance: Relevant to executable section layout, section-size features, or binary structural analysis.
10. A survey of data mining techniques for malware detection using file features
   - Authors: Muazzam Siddiqui, Morgan C. Wang, Joohan Lee
   - Year: 2008
   - Venue/publisher: Proceedings of the 46th Annual Southeast Regional Conference on XX
   - Type: proceedings-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1145/1593105.1593239
   - Count: 48 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `PE file section size features malware detection`
   - Relevance: Relevant to executable section layout, section-size features, or binary structural analysis.

### Rejected high-count candidates

- Android Malware Familial Classification Based on DEX File Section Features (2020); 46 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Bio-inspired for Features Optimization and Malware Detection (2018); 41 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- DeepMalNet: Evaluating shallow and deep networks for static PE malware detection (2018); 40 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- An Efficient Approach For Malware Detection Using PE Header Specifications (2020); 37 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Android Malware Detection Using Fine-Grained Features (2020); 31 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Binary executable file similarity calculation using function matching (2019); 30 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Structural analysis of binary executable headers for malware detection optimization (2017); 28 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- PE File Header Analysis-Based Packed PE File Detection Technique (PHAD) (2008); 28 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Static PE Malware Detection Using Gradient Boosting Decision Trees Algorithm (2018); 25 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- A Real-Time PE-Malware Detection System Based on CHI-Square Test and PE-File Features (2015); 24 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.

## Section-level entropy

Search aliases: section entropy, PE section entropy, packed executable entropy, malware entropy

Queries:
- `PE section entropy packed executable malware detection`
- `section entropy binary analysis malware`
- `executable entropy compression packing`

Ambiguity notes:
- Section-level entropy is scoped to executable/binary sections, not whole-file entropy.

### Selected sources

1. Using Entropy Analysis to Find Encrypted and Packed Malware
   - Authors: Robert Lyda, James Hamrock
   - Year: 2007
   - Venue/publisher: IEEE Security and Privacy Magazine
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1109/msp.2007.48
   - Count: 286 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `PE section entropy packed executable malware detection`
   - Relevance: Relevant to entropy computed over executable sections, packing detection, malware analysis, or binary compressibility.
2. Malware analysis using visualized images and entropy graphs
   - Authors: Kyoung Soo Han, Jae Hyun Lim, Boojoong Kang, Eul Gyu Im
   - Year: 2015
   - Venue/publisher: International Journal of Information Security
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1007/s10207-014-0242-0
   - Count: 136 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `section entropy binary analysis malware`
   - Relevance: Relevant to entropy computed over executable sections, packing detection, malware analysis, or binary compressibility.
3. Structural entropy and metamorphic malware
   - Authors: Donabelle Baysa, Richard M. Low, Mark Stamp
   - Year: 2013
   - Venue/publisher: Journal of Computer Virology and Hacking Techniques
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1007/s11416-013-0185-4
   - Count: 95 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `section entropy binary analysis malware`
   - Relevance: Relevant to entropy computed over executable sections, packing detection, malware analysis, or binary compressibility.
4. EntropLyzer: Android Malware Classification and Characterization Using Entropy Analysis of Dynamic Characteristics
   - Authors: David Sean Keyes, Beiqi Li, Gurdip Kaur, Arash Habibi Lashkari, Francois Gagnon, Frederic Massicotte
   - Year: 2021
   - Venue/publisher: 2021 Reconciling Data Analytics, Automation, Privacy, and Security: A Big Data Challenge (RDAAPS)
   - Type: proceedings-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1109/rdaaps48126.2021.9452002
   - Count: 91 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `section entropy binary analysis malware`
   - Relevance: Relevant to entropy computed over executable sections, packing detection, malware analysis, or binary compressibility.
5. Entropy analysis to classify unknown packing algorithms for malware detection
   - Authors: Munkhbayar Bat-Erdene, Hyundo Park, Hongzhe Li, Heejo Lee, Mahn-Soo Choi
   - Year: 2017
   - Venue/publisher: International Journal of Information Security
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1007/s10207-016-0330-4
   - Count: 54 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `section entropy binary analysis malware`
   - Relevance: Relevant to entropy computed over executable sections, packing detection, malware analysis, or binary compressibility.
6. File Entropy Signal Analysis Combined With Wavelet Decomposition for Malware Classification
   - Authors: Hui Guo, Shuguang Huang, Cheng Huang, Zulie Pan, Min Zhang, Fan Shi
   - Year: 2020
   - Venue/publisher: IEEE Access
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1109/access.2020.3020330
   - Count: 12 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `section entropy binary analysis malware`
   - Relevance: Relevant to entropy computed over executable sections, packing detection, malware analysis, or binary compressibility.
7. Cloud Based Malware Detection Through Behavioral Entropy
   - Authors: Kambiz Vahedi, Khadijeh Afhamisisi
   - Year: 2021
   - Venue/publisher: 2021 IEEE International Conference on Big Data (Big Data)
   - Type: proceedings-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1109/bigdata52589.2021.9671981
   - Count: 6 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `PE section entropy packed executable malware detection`
   - Relevance: Relevant to entropy computed over executable sections, packing detection, malware analysis, or binary compressibility.
8. Linux IoT Malware Variant Classification Using Binary Lifting and Opcode Entropy
   - Authors: Jayanthi Ramamoorthy, Khushi Gupta, Narasimha K. Shashidhar, Cihan Varol
   - Year: 2024
   - Venue/publisher: Electronics
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.3390/electronics13122381
   - Count: 6 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `section entropy binary analysis malware`
   - Relevance: Relevant to entropy computed over executable sections, packing detection, malware analysis, or binary compressibility.
9. Binary File’s Visualization and Entropy Features Analysis Combined with Multiple Deep Learning Networks for Malware Classification
   - Authors: Hui Guo, Shuguang Huang, Cheng Huang, Fan Shi, Min Zhang, Zulie Pan
   - Year: 2020
   - Venue/publisher: Security and Communication Networks
   - Type: journal-article
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1155/2020/8881760
   - Count: 4 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `section entropy binary analysis malware`
   - Relevance: Relevant to entropy computed over executable sections, packing detection, malware analysis, or binary compressibility.
10. Byte Label Malware Classification Using Image Entropy
   - Authors: Ayan Dey, Sukriti Bhattacharya, Nabendu Chaki
   - Year: 2019
   - Venue/publisher: Advances in Intelligent Systems and Computing
   - Type: book-chapter
   - Canonical non-paper source: no
   - DOI/URL: https://doi.org/10.1007/978-981-13-3702-4_2
   - Count: 4 (Crossref is-referenced-by-count, retrieved 2026-07-01)
   - Query: `section entropy binary analysis malware`
   - Relevance: Relevant to entropy computed over executable sections, packing detection, malware analysis, or binary compressibility.

### Rejected high-count candidates

- Entropy-Based Malware Detection Using One Dimensional CNN (2024); 3 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Malware Detection with CNNs on Entropy and Greyscale Images (2026); 0 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Structural Entropy and Metamorphic Malware (None); 0 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- DeepRevelio: Multivariate Time Series Detection for Stealthy IoT Malware via Variable-length Entropy Analysis (2026); 0 via Crossref is-referenced-by-count: Relevant candidate outside top selected limit.
- Colloidal matter: Packing, geometry, and entropy (2015); 477 via Crossref is-referenced-by-count: Rejected by the metric-specific title relevance gate.
- Executable cell biology (2007); 430 via Crossref is-referenced-by-count: Rejected by the metric-specific title relevance gate.
- Understanding shape entropy through local dense packing (2014); 223 via Crossref is-referenced-by-count: Rejected by the metric-specific title relevance gate.
- A survey on machine learning-based malware detection in executable files (2021); 211 via Crossref is-referenced-by-count: Rejected by the metric-specific title relevance gate.
- Entropy and data compression schemes (1993); 206 via Crossref is-referenced-by-count: Rejected by the metric-specific title relevance gate.
- A comparative assessment of malware classification using binary texture analysis and dynamic analysis (2011); 168 via Crossref is-referenced-by-count: Rejected by the metric-specific title relevance gate.
