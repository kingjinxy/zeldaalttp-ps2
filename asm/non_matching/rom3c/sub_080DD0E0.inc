	THUMB_FUNC_START sub_080DD0E0
sub_080DD0E0: @ 0x080DD0E0
	push {r4-r6,lr}
	add r5, r0, #0
	lsl r5, r5, #24
	lsr r5, r5, #24
	mov r0, #173
	mov r1, #0
	bl sub_080CA538
	ldr r4, _080DD190  @ =gRam
	ldr r1, _080DD194  @ =0x00001082
	add r3, r4, r1
	add r3, r0, r3
	ldr r2, _080DD198  @ =gUnknown_0200EC04
	add r1, r5, r2
	ldrb r1, [r1]
	mov r2, #3
	and r2, r2, r1
	mov r6, #0
	strb r2, [r3]
	ldr r3, _080DD19C  @ =0x00000FB2
	add r1, r4, r3
	add r1, r0, r1
	strb r2, [r1]
	ldr r2, _080DD1A0  @ =gUnknown_0200EBA0
	add r1, r5, r2
	ldrb r2, [r1]
	ldr r3, _080DD1A4  @ =gUnknown_0200EBB4
	add r1, r5, r3
	ldrb r1, [r1]
	lsl r1, r1, #8
	add r2, r2, r1
	add r2, r2, #2
	ldr r3, _080DD1A8  @ =0x00000ED2
	add r1, r4, r3
	add r1, r0, r1
	strb r2, [r1]
	add r3, r3, #32
	add r1, r4, r3
	add r1, r0, r1
	lsr r2, r2, #8
	strb r2, [r1]
	ldr r2, _080DD1AC  @ =gUnknown_0200EBC8
	add r1, r5, r2
	ldrb r2, [r1]
	ldr r3, _080DD1B0  @ =gUnknown_0200EBDC
	add r1, r5, r3
	ldrb r1, [r1]
	lsl r1, r1, #8
	add r2, r2, r1
	add r2, r2, #2
	ldr r3, _080DD1B4  @ =0x00000EE2
	add r1, r4, r3
	add r1, r0, r1
	strb r2, [r1]
	add r3, r3, #32
	add r1, r4, r3
	add r1, r0, r1
	lsr r2, r2, #8
	strb r2, [r1]
	ldr r2, _080DD1B8  @ =0x000010F2
	add r1, r4, r2
	add r1, r0, r1
	mov r3, #161
	lsl r3, r3, #4
	add r2, r4, r3
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080DD1BC  @ =0x00001172
	add r1, r4, r2
	add r1, r0, r1
	mov r2, #1
	strb r2, [r1]
	ldr r3, _080DD1C0  @ =0x00001052
	add r1, r4, r3
	add r0, r0, r1
	strb r2, [r0]
	add r0, r5, #0
	bl sub_080DD3D4
	ldr r1, _080DD1C4  @ =0x00001663
	add r0, r4, r1
	strb r6, [r0]
	ldr r2, _080DD1C8  @ =0x00001719
	add r4, r4, r2
	strb r6, [r4]
	pop {r4-r6}
	pop {r0}
	bx r0
_080DD190:
	.4byte gRam
_080DD194:
	.4byte 0x00001082
_080DD198:
	.4byte gUnknown_0200EC04
_080DD19C:
	.4byte 0x00000FB2
_080DD1A0:
	.4byte gUnknown_0200EBA0
_080DD1A4:
	.4byte gUnknown_0200EBB4
_080DD1A8:
	.4byte 0x00000ED2
_080DD1AC:
	.4byte gUnknown_0200EBC8
_080DD1B0:
	.4byte gUnknown_0200EBDC
_080DD1B4:
	.4byte 0x00000EE2
_080DD1B8:
	.4byte 0x000010F2
_080DD1BC:
	.4byte 0x00001172
_080DD1C0:
	.4byte 0x00001052
_080DD1C4:
	.4byte 0x00001663
_080DD1C8:
	.4byte 0x00001719
	THUMB_FUNC_END sub_080DD0E0

