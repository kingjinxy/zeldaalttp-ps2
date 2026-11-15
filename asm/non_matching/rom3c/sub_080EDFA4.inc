	THUMB_FUNC_START sub_080EDFA4
sub_080EDFA4: @ 0x080EDFA4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _080EE014  @ =gRam
	ldr r2, _080EE018  @ =0x00000FD2
	add r0, r1, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080EDFD4
	sub r2, r2, #32
	add r0, r1, r2
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #3
	beq _080EDFD4
	add r1, r0, #0
	lsl r1, r1, #3
	ldr r0, _080EE01C  @ =gUnknown_081788E8
	add r1, r1, r0
	add r0, r5, #0
	mov r2, #1
	bl sub_080C9480
_080EDFD4:
	ldr r1, _080EE020  @ =gUnknown_0817890A
	ldr r4, _080EE014  @ =gRam
	ldr r2, _080EE024  @ =0x00000F92
	add r0, r4, r2
	add r0, r5, r0
	ldrb r2, [r0]
	add r1, r2, r1
	ldrb r1, [r1]
	lsl r1, r1, #3
	ldr r0, _080EE028  @ =gUnknown_08178914
	add r1, r1, r0
	ldr r0, _080EE02C  @ =gUnknown_08178900
	add r2, r2, r0
	ldrb r2, [r2]
	add r0, r5, #0
	bl sub_080C9480
	ldr r0, _080EE030  @ =0x00001012
	add r4, r4, r0
	add r4, r5, r4
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	add r0, r5, #0
	bl sub_080C6230
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
_080EE014:
	.4byte gRam
_080EE018:
	.4byte 0x00000FD2
_080EE01C:
	.4byte gUnknown_081788E8
_080EE020:
	.4byte gUnknown_0817890A
_080EE024:
	.4byte 0x00000F92
_080EE028:
	.4byte gUnknown_08178914
_080EE02C:
	.4byte gUnknown_08178900
_080EE030:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080EDFA4

