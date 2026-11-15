	THUMB_FUNC_START sub_0810282C
sub_0810282C: @ 0x0810282C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r9, r4
	add r0, r4, #0
	bl sub_080C5044
	ldr r7, _081028B0  @ =gRam
	ldr r1, _081028B4  @ =0x00000FD2
	add r0, r7, r1
	add r0, r0, r4
	mov r8, r0
	ldrb r5, [r0]
	cmp r5, #0
	bne _0810290C
	add r0, r4, #0
	bl sub_080C99DC
	add r0, r4, #0
	bl sub_080C7A20
	ldr r2, _081028B8  @ =0x00001152
	add r0, r7, r2
	add r6, r4, r0
	ldrb r1, [r6]
	add r0, r1, #0
	sub r0, r0, #192
	mov r2, #128
	and r0, r0, r2
	cmp r0, #0
	bne _08102874
	sub r0, r1, #2
	strb r0, [r6]
_08102874:
	ldr r3, _081028BC  @ =0x00001142
	add r0, r7, r3
	add r3, r4, r0
	ldrb r0, [r3]
	sub r0, r0, #1
	and r0, r0, r2
	cmp r0, #0
	beq _081028D2
	strb r5, [r3]
	strb r5, [r6]
	ldr r1, _081028C0  @ =0x00000FC2
	add r0, r7, r1
	add r5, r4, r0
	ldrb r2, [r5]
	cmp r2, #0
	bne _081028CC
	ldr r1, _081028C4  @ =0x00000F52
	add r0, r7, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _081028C8  @ =0x00001172
	add r0, r7, r1
	add r0, r4, r0
	strb r2, [r0]
	strb r2, [r3]
	strb r2, [r6]
	mov r0, #63
	strb r0, [r5]
	b _0810294E
_081028B0:
	.4byte gRam
_081028B4:
	.4byte 0x00000FD2
_081028B8:
	.4byte 0x00001152
_081028BC:
	.4byte 0x00001142
_081028C0:
	.4byte 0x00000FC2
_081028C4:
	.4byte 0x00000F52
_081028C8:
	.4byte 0x00001172
_081028CC:
	mov r0, #16
	mov r2, r8
	strb r0, [r2]
_081028D2:
	ldr r2, _081028F4  @ =gRam
	ldr r3, _081028F8  @ =0x00001152
	add r0, r2, r3
	add r0, r0, r9
	ldrb r0, [r0]
	add r1, r0, #0
	sub r1, r1, #24
	mov r0, #128
	and r1, r1, r0
	cmp r1, #0
	beq _08102900
	ldr r1, _081028FC  @ =0x00000F92
	add r0, r2, r1
	add r0, r0, r9
	mov r1, #2
	b _0810294C
	.byte 0x00
	.byte 0x00
_081028F4:
	.4byte gRam
_081028F8:
	.4byte 0x00001152
_081028FC:
	.4byte 0x00000F92
_08102900:
	ldr r3, _08102908  @ =0x00000F92
	add r0, r2, r3
	b _0810294A
	.byte 0x00
	.byte 0x00
_08102908:
	.4byte 0x00000F92
_0810290C:
	mov r1, r8
	ldrb r0, [r1]
	cmp r0, #1
	bne _0810293C
	ldr r2, _0810295C  @ =0x00001152
	add r0, r7, r2
	add r0, r4, r0
	mov r1, #48
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #16
	bl sub_080C35FC
	add r0, r4, #0
	bl sub_080C36D8
	ldr r3, _08102960  @ =0x00001082
	add r1, r7, r3
	add r1, r4, r1
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #11
	bl sub_080CF140
_0810293C:
	ldr r1, _08102964  @ =0x00000F82
	add r0, r7, r1
	add r0, r0, r9
	mov r1, #1
	strb r1, [r0]
	ldr r2, _08102968  @ =0x00000F92
	add r0, r7, r2
_0810294A:
	add r0, r0, r9
_0810294C:
	strb r1, [r0]
_0810294E:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810295C:
	.4byte 0x00001152
_08102960:
	.4byte 0x00001082
_08102964:
	.4byte 0x00000F82
_08102968:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_0810282C

