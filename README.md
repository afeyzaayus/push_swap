# push_swap

`push_swap`, verilen sayıları **yalnızca iki stack (A ve B)** ve sınırlı operasyonlar kullanarak sıralayan bir 42 projesidir.  
Program, sıralama adımlarını standart çıktı olarak operasyon listesi halinde üretir.

## Proje Özeti

- Başlangıçta tüm sayılar `stack A` içindedir.
- `stack B` yardımcı stack olarak kullanılır.
- Amaç, en az/az sayıda hamle ile `stack A`'yı küçükten büyüğe sıralamaktır.

## Desteklenen Operasyonlar

Bu implementasyonda kullanılan temel operasyonlar:

- `sa` : stack A'nın ilk iki elemanını yer değiştirir.
- `pa` : stack B'nin tepesindeki elemanı stack A'ya taşır.
- `pb` : stack A'nın tepesindeki elemanı stack B'ye taşır.
- `ra` : stack A'yı yukarı döndürür (ilk eleman sona gider).
- `rra`: stack A'yı aşağı döndürür (son eleman başa gelir).

## Algoritma Yaklaşımı

- **Küçük veri setleri (<= 70 eleman):**  
  Küçük boyutlar için özel bir strateji kullanılır (`sort_small` / `sort_three`).
- **Büyük veri setleri (> 70 eleman):**  
  Elemanlara sıra etiketleri atanır ve bit bazlı **radix sort** yaklaşımı uygulanır.

## Kurulum ve Derleme

```bash
make
```

Bu komut `libft` ile birlikte projeyi derler ve `push_swap` ikilisini oluşturur.

## Kullanım

```bash
./push_swap 3 2 1
```

veya

```bash
./push_swap "3 2 1"
```

Çıktı olarak satır satır operasyonlar yazdırılır:

```text
sa
rra
```

## Hatalı Girdi Durumları

Aşağıdaki durumlarda program `Error` çıktısı verir:

- Geçersiz sayı formatı
- `int` sınırı dışında değer
- Tekrarlanan sayı (duplicate)

