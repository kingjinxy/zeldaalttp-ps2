	THUMB_FUNC_START sub_080A185C
sub_080A185C: @ 0x080A185C
	push {r4,r5,lr}
	ldr r4, _080A1890  @ =gRam
	ldr r0, _080A1894  @ =0x000016E9
	add r5, r4, r0
	ldrb r1, [r5]
	mov r2, #128
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080A188C
	ldr r1, _080A1898  @ =0x00000546
	add r0, r4, r1
	ldrb r1, [r0]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080A188C
	ldr r1, _080A189C  @ =0x00001792
	add r0, r4, r1
	ldrb r0, [r0]
	mov r3, #1
	and r3, r3, r0
	cmp r3, #0
	beq _080A18A0
_080A188C:
	mov r0, #0
	b _080A18D8
_080A1890:
	.4byte gRam
_080A1894:
	.4byte 0x000016E9
_080A1898:
	.4byte 0x00000546
_080A189C:
	.4byte 0x00001792
_080A18A0:
	ldr r1, _080A18E0  @ =0x00001796
	add r0, r4, r1
	strb r3, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r3, [r0]
	sub r1, r1, #4
	add r0, r4, r1
	strb r3, [r0]
	strb r3, [r5]
	ldr r0, _080A18E4  @ =0x00001705
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080A18E8  @ =0x0000178E
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #1
	beq _080A18D6
	ldr r1, _080A18EC  @ =0x000009B8
	add r0, r4, r1
	strb r3, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r3, [r0]
_080A18D6:
	mov r0, #1
_080A18D8:
	pop {r4,r5}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080A18E0:
	.4byte 0x00001796
_080A18E4:
	.4byte 0x00001705
_080A18E8:
	.4byte 0x0000178E
_080A18EC:
	.4byte 0x000009B8
	THUMB_FUNC_END sub_080A185C

