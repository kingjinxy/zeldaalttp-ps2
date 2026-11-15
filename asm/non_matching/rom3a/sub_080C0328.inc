	THUMB_FUNC_START sub_080C0328
sub_080C0328: @ 0x080C0328
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080C03BC  @ =gRam
	ldr r2, _080C03C0  @ =0x00000E15
	add r1, r3, r2
	add r1, r0, r1
	mov r6, #0
	mov r2, #43
	strb r2, [r1]
	ldr r2, _080C03C4  @ =0x000016D5
	add r1, r3, r2
	ldrb r2, [r1]
	lsl r2, r2, #25
	lsr r2, r2, #24
	ldr r5, _080C03C8  @ =gUnknown_02006880
	ldr r4, _080C03CC  @ =gUnknown_08171CDE
	add r1, r2, r4
	ldrb r1, [r1]
	strb r1, [r5]
	add r5, r5, #1
	add r1, r2, #1
	add r1, r1, r4
	ldrb r1, [r1]
	strb r1, [r5]
	add r5, r5, #1
	add r1, r2, #2
	add r1, r1, r4
	ldrb r1, [r1]
	strb r1, [r5]
	ldr r1, _080C03D0  @ =gUnknown_02006883
	add r2, r2, #3
	add r2, r2, r4
	ldrb r2, [r2]
	strb r2, [r1]
	add r1, r1, #1
	strb r2, [r1]
	ldr r2, _080C03D4  @ =0x00001844
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #2
	strb r2, [r1]
	ldr r2, _080C03D8  @ =0x00000E29
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #76
	strb r2, [r1]
	ldr r2, _080C03DC  @ =0x00001832
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #8
	strb r2, [r1]
	ldr r2, _080C03E0  @ =0x00000E1F
	add r1, r3, r2
	add r1, r0, r1
	strb r6, [r1]
	ldr r2, _080C03E4  @ =0x00001818
	add r1, r3, r2
	add r1, r0, r1
	strb r6, [r1]
	ldr r1, _080C03E8  @ =0x00001837
	add r3, r3, r1
	add r3, r0, r3
	mov r1, #3
	strb r1, [r3]
	ldr r2, _080C03EC  @ =gUnknown_02006888
	mov r1, #20
	strb r1, [r2]
	bl sub_080C03F0
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C03BC:
	.4byte gRam
_080C03C0:
	.4byte 0x00000E15
_080C03C4:
	.4byte 0x000016D5
_080C03C8:
	.4byte gUnknown_02006880
_080C03CC:
	.4byte gUnknown_08171CDE
_080C03D0:
	.4byte gUnknown_02006883
_080C03D4:
	.4byte 0x00001844
_080C03D8:
	.4byte 0x00000E29
_080C03DC:
	.4byte 0x00001832
_080C03E0:
	.4byte 0x00000E1F
_080C03E4:
	.4byte 0x00001818
_080C03E8:
	.4byte 0x00001837
_080C03EC:
	.4byte gUnknown_02006888
	THUMB_FUNC_END sub_080C0328

