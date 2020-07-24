# TikTok

"Renegade, renegade, ooh.. ahh.."

As a millennial living in 2020, we often hear this catchy song played in a _[TikTok](https://www.tiktok.com/en/)_ dance.

Hubert, a professional TikTok dancer and puzzle lover has decided to challenge you to dance in _TikTok pattern_.

This pattern requires two positive integers, P and M. If the first integer is a prime number, you will have to turn on the music and dance for P second(s), otherwise, you need to dance without music. Whilst dancing, you must shout TIK or TOK alternately every multiple of M.

Complete this challenge and you will be the next King of TikTok!

## Input

The first input, P, is a positive integer indicating the time limit. The second input, M, is another positive integer <= P, indicating the multiple.

## Output

The first output would be a boolean, 1 if P is a prime number and 0 otherwise, followed by "," and the TikTok pattern.

| Sample Input | Sample Output            |
| ------------ | ------------------------ |
| `4 2`        | `0, 1 TIK 3 TOK`         |
| `5 1`        | `1, TIK TOK TIK TOK TIK` |
| `3 3`        | `1, 1 2 TIK`             |
| `6 3`        | `0, 1 2 TIK 4 5 TOK`     |
