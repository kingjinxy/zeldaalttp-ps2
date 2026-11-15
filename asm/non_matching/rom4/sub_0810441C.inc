	THUMB_FUNC_START sub_0810441C
sub_0810441C: @ 0x0810441C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _08104484  @ =gRam
	ldr r2, _08104488  @ =0x00001082
	add r0, r1, r2
	add r0, r3, r0
	ldrb r0, [r0]
	add r4, r1, #0
	cmp r0, #0
	beq _0810444C
	ldr r1, _0810448C  @ =0x00000F92
	add r0, r4, r1
	add r1, r3, r0
	mov r0, #1
	strb r0, [r1]
	add r2, r2, #96
	add r0, r4, r2
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810444C
	mov r0, #0
	strb r0, [r1]
_0810444C:
	ldr r1, _08104490  @ =0x00000D94
	add r0, r4, r1
	add r0, r3, r0
	mov r1, #48
	strb r1, [r0]
	ldr r2, _08104494  @ =0x00000FB2
	add r0, r4, r2
	add r0, r3, r0
	ldrb r2, [r0]
	ldr r1, _0810448C  @ =0x00000F92
	add r0, r4, r1
	add r0, r3, r0
	lsl r2, r2, #1
	ldrb r0, [r0]
	add r2, r2, r0
	lsl r1, r2, #1
	add r1, r1, r2
	lsl r1, r1, #3
	ldr r0, _08104498  @ =gUnknown_0817BBAC
	add r1, r1, r0
	add r0, r3, #0
	mov r2, #3
	bl sub_080C9480
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08104484:
	.4byte gRam
_08104488:
	.4byte 0x00001082
_0810448C:
	.4byte 0x00000F92
_08104490:
	.4byte 0x00000D94
_08104494:
	.4byte 0x00000FB2
_08104498:
	.4byte gUnknown_0817BBAC
	THUMB_FUNC_END sub_0810441C

