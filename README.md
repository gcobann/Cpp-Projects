# C++ Konsol Projeleri Koleksiyonu

Bu repository, C++ dilinin temellerini pekiştirmek amacıyla geliştirdiğim küçük konsol uygulamalarını içermektedir.

Tüm projeler Visual Studio 2022'de tek bir Solution altında geliştirilmiştir.

---

## Projeler

### 1. Slot Makinesi (Sayı Tahmin Oyunu)
Kullanıcıdan bir bahis miktarı ve bir zorluk seviyesi (Kolay, Orta, Zor) isteyen basit bir sayı tahmin oyunudur.
* **Kolay:** 1-10 arasında, 1 tahmin hakkı.
* **Orta:** 1-50 arasında, 3 tahmin hakkı.
* **Zor:** 1-100 arasında, 5 tahmin hakkı.

### 2. Taş-Kağıt-Makas
İki oyunculu, yerel (local) bir Taş-Kağıt-Makas oyunudur. Program, iki oyuncudan da seçimlerini (`rock`, `paper`, `scissors`) alır ve `if/else-if` bloklarını kullanarak kazananı veya beraberliği belirler.

### 3. CGPA (Genel Not Ortalaması) Hesaplayıcı
Bir öğrencinin genel not ortalamasını (CGPA) hesaplayan bir araçtır.
1.  Kullanıcıdan kaç ders aldığını sorar.
2.  Bir döngü içinde her dersin adını, kredisini ve o dersten alınan notun 4.0'lük sistemdeki karşılığını (örn: AA=4.0, BA=3.5) ister.
3.  Tüm girdiler alındıktan sonra toplam krediyi, toplam ağırlıklı puanı ve final CGPA notunu hesaplayarak ekrana yazdırır.

### 4. Basit Hesap Makinesi
Dört temel aritmetik işlemi (+, -, *, /) yapabilen bir konsol hesap makinesidir. Kullanıcıdan iki sayı ve bir operatör alır, `switch-case` yapısı kullanarak sonucu hesaplar. Sıfıra bölme hatasını da kontrol eder.
