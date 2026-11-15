	THUMB_FUNC_START sub_080F9E78
sub_080F9E78: @ 0x080F9E78
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080F9EBC  @ =gRam
	ldr r2, _080F9EC0  @ =gUnknown_0200F318
	add r1, r0, r2
	ldrb r2, [r1]
	ldr r4, _080F9EC4  @ =0x00000968
	add r1, r3, r4
	strb r2, [r1]
	ldr r2, _080F9EC8  @ =gUnknown_0200F31E
	add r1, r0, r2
	ldrb r2, [r1]
	add r4, r4, #1
	add r1, r3, r4
	strb r2, [r1]
	ldr r2, _080F9ECC  @ =gUnknown_0200F324
	add r1, r0, r2
	ldrb r2, [r1]
	add r4, r4, #3
	add r1, r3, r4
	strb r2, [r1]
	ldr r2, _080F9ED0  @ =gUnknown_0200F32A
	add r1, r0, r2
	ldrb r1, [r1]
	add r4, r4, #1
	add r3, r3, r4
	strb r1, [r3]
	mov r1, #15
	bl sub_080C2DCC
	pop {r4}
	pop {r0}
	bx r0
_080F9EBC:
	.4byte gRam
_080F9EC0:
	.4byte gUnknown_0200F318
_080F9EC4:
	.4byte 0x00000968
_080F9EC8:
	.4byte gUnknown_0200F31E
_080F9ECC:
	.4byte gUnknown_0200F324
_080F9ED0:
	.4byte gUnknown_0200F32A
	THUMB_FUNC_END sub_080F9E78

