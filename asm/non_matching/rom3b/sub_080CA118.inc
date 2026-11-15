	THUMB_FUNC_START sub_080CA118
sub_080CA118: @ 0x080CA118
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	lsl r1, r1, #24
	mov r0, #152
	lsl r0, r0, #24
	add r1, r1, r0
	lsr r6, r1, #24
	ldr r7, _080CA198  @ =gRam
	ldr r1, _080CA19C  @ =0x00000996
	add r0, r7, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080CA190
	ldr r0, _080CA1A0  @ =0x00000EE2
	add r4, r7, r0
	add r4, r5, r4
	ldrb r1, [r4]
	add r0, r0, #32
	add r3, r7, r0
	add r3, r5, r3
	ldrb r0, [r3]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r0, _080CA1A4  @ =gUnknown_0817277E
	add r0, r6, r0
	ldrb r2, [r0]
	ldr r0, _080CA1A8  @ =gUnknown_08172784
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	add r1, r1, r2
	strb r1, [r4]
	lsr r1, r1, #8
	strb r1, [r3]
	ldr r1, _080CA1AC  @ =0x00000ED2
	add r4, r7, r1
	add r4, r5, r4
	ldrb r1, [r4]
	ldr r0, _080CA1B0  @ =0x00000EF2
	add r3, r7, r0
	add r3, r5, r3
	ldrb r0, [r3]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r0, _080CA1B4  @ =gUnknown_08172780
	add r0, r6, r0
	ldrb r2, [r0]
	ldr r0, _080CA1B8  @ =gUnknown_0817277C
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	add r1, r1, r2
	strb r1, [r4]
	lsr r1, r1, #8
	strb r1, [r3]
_080CA190:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CA198:
	.4byte gRam
_080CA19C:
	.4byte 0x00000996
_080CA1A0:
	.4byte 0x00000EE2
_080CA1A4:
	.4byte gUnknown_0817277E
_080CA1A8:
	.4byte gUnknown_08172784
_080CA1AC:
	.4byte 0x00000ED2
_080CA1B0:
	.4byte 0x00000EF2
_080CA1B4:
	.4byte gUnknown_08172780
_080CA1B8:
	.4byte gUnknown_0817277C
	THUMB_FUNC_END sub_080CA118

