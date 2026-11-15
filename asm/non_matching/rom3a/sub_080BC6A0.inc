	THUMB_FUNC_START sub_080BC6A0
sub_080BC6A0: @ 0x080BC6A0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	bl sub_080BDB54
	ldr r0, _080BC760  @ =gRam
	ldr r1, _080BC764  @ =0x00000FF2
	add r2, r0, r1
	mov r1, #140
	strb r1, [r2]
	ldr r2, _080BC768  @ =0x00000FF3
	add r1, r0, r2
	mov r2, #141
	strb r2, [r1]
	ldr r3, _080BC76C  @ =0x00000FF4
	add r1, r0, r3
	strb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	ldr r1, _080BC770  @ =0x00000FFF
	add r0, r0, r1
	strb r2, [r0]
	mov r4, #13
_080BC706:
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CEB84
	sub r4, r4, #1
	cmp r4, #0
	bge _080BC706
	add r0, r5, #0
	bl sub_080B9584
	mov r0, #0
	bl sub_0810BE30
	mov r4, #13
_080BC722:
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_0810C9E4
	sub r4, r4, #1
	cmp r4, #0
	bgt _080BC722
	mov r4, #15
	ldr r1, _080BC760  @ =gRam
	ldr r2, _080BC764  @ =0x00000FF2
	add r5, r1, r2
	ldr r0, _080BC774  @ =0x00000FA2
	add r3, r1, r0
	mov r2, #9
_080BC73E:
	add r0, r4, r5
	ldrb r0, [r0]
	cmp r0, #0
	beq _080BC74A
	add r0, r4, r3
	strb r2, [r0]
_080BC74A:
	sub r4, r4, #1
	cmp r4, #0
	bge _080BC73E
	ldr r2, _080BC778  @ =0x00000D19
	add r1, r1, r2
	mov r0, #3
	strb r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BC760:
	.4byte gRam
_080BC764:
	.4byte 0x00000FF2
_080BC768:
	.4byte 0x00000FF3
_080BC76C:
	.4byte 0x00000FF4
_080BC770:
	.4byte 0x00000FFF
_080BC774:
	.4byte 0x00000FA2
_080BC778:
	.4byte 0x00000D19
	THUMB_FUNC_END sub_080BC6A0

