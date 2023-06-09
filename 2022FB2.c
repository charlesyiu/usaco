// Copyright , by Charles Yiu
//   URL: https://yiu.ch/arles https://github.com/charlesyiu
//  All rights reserved. Redistribution and use in source and binary forms, with or without modification, are permitted provided that the
// following conditions are met:
//     Redistributions of source code must retain the above copyright notice, this list of conditions and the
//     following disclaimer.
//     Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
//   following disclaimer in the documentation and/or other materials provided with the distribution.
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
//   USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

//
// Created by charles yiu on 25/3/2023.
//

#include <stdio.h>

int request_int(char* query) {
    int requested;
    printf("%s: ", query);
    scanf("%d", &requested);
    return requested;
}

int main() {
    register int index;

    int length = request_int("length of list");

    int desired_list[length];
    for (index = 0; index < length; index++)
        desired_list[index] = request_int("value of desired list");

    int list[length];
    for (index = 0; index < length; index++)
        list[index] = request_int("value of list");

    int steps = 0;
    int desired_index = 0;
    for (index = 0; index < length - steps; index++) {
        if (desired_list[desired_index] == list[index])
            desired_index++;
        else
            steps++;
    }
    printf("steps: %d", steps);
    return 0;
}