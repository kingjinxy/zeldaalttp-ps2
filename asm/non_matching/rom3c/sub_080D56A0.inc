	THUMB_FUNC_START sub_080D56A0
sub_080D56A0: @ 0x080D56A0
	push {r4,r5,lr}
	mov r4, #15
	ldr r2, _080D5728  @ =gUnknown_030031D2
	add r3, r2, #0
	add r3, r3, #80
_080D56AA:
	add r1, r4, r2
	ldrb r0, [r1]
	cmp r0, #0
	beq _080D56BC
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D56BC
	strb r0, [r1]
_080D56BC:
	sub r4, r4, #1
	cmp r4, #0
	bge _080D56AA
	lsl r1, r4, #24
	lsr r1, r1, #24
	mov r0, #108
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	bgt _080D56D4
	mov r4, #0
_080D56D4:
	ldr r2, _080D572C  @ =gRam
	ldr r0, _080D5730  @ =0x00000EE2
	add r1, r2, r0
	add r1, r4, r1
	ldr r0, _080D5734  @ =gUnknown_0201094F
	ldrb r0, [r0]
	mov r3, #0
	strb r0, [r1]
	ldr r1, _080D5738  @ =0x00000F02
	add r0, r2, r1
	add r0, r4, r0
	ldr r1, _080D573C  @ =gUnknown_0201095F
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080D5740  @ =gUnknown_0201096F
	ldrb r1, [r0]
	add r0, r0, #16
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #8
	ldr r5, _080D5744  @ =0x00000ED2
	add r0, r2, r5
	add r0, r4, r0
	strb r1, [r0]
	add r5, r5, #32
	add r0, r2, r5
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _080D5748  @ =0x000010F2
	add r0, r2, r1
	add r0, r4, r0
	strb r3, [r0]
	ldr r5, _080D574C  @ =0x00001172
	add r2, r2, r5
	add r2, r4, r2
	mov r0, #1
	strb r0, [r2]
	pop {r4,r5}
	pop {r0}
	bx r0
_080D5728:
	.4byte gUnknown_030031D2
_080D572C:
	.4byte gRam
_080D5730:
	.4byte 0x00000EE2
_080D5734:
	.4byte gUnknown_0201094F
_080D5738:
	.4byte 0x00000F02
_080D573C:
	.4byte gUnknown_0201095F
_080D5740:
	.4byte gUnknown_0201096F
_080D5744:
	.4byte 0x00000ED2
_080D5748:
	.4byte 0x000010F2
_080D574C:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080D56A0

