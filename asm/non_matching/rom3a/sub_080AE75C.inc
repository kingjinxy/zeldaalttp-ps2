	THUMB_FUNC_START sub_080AE75C
sub_080AE75C: @ 0x080AE75C
	push {r4,lr}
	mov r2, #4
	ldr r3, _080AE780  @ =gRam
_080AE762:
	lsl r2, r2, #24
	asr r0, r2, #24
	ldr r4, _080AE784  @ =0x00000E15
	add r1, r3, r4
	add r0, r0, r1
	ldrb r0, [r0]
	sub r0, r0, #12
	cmp r0, #37
	bhi _080AE830
	lsl r0, r0, #2
	ldr r1, _080AE788  @ =0x080AE78C
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.byte 0x00
	.byte 0x00
_080AE780:
	.4byte gRam
_080AE784:
	.4byte 0x00000E15
_080AE788:
	.4byte 0x080AE78C
	.4byte _080AE824
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE824
	.4byte _080AE824
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE824
	.4byte _080AE824
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE830
	.4byte _080AE824
	.4byte _080AE824
_080AE824:
	asr r0, r2, #24
	ldr r4, _080AE844  @ =0x00000E15
	add r1, r3, r4
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
_080AE830:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r2, r1
	lsr r2, r0, #24
	cmp r0, #0
	bge _080AE762
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AE844:
	.4byte 0x00000E15
	THUMB_FUNC_END sub_080AE75C

