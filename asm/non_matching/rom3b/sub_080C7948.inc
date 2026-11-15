	THUMB_FUNC_START sub_080C7948
sub_080C7948: @ 0x080C7948
	push {r4,lr}
	ldr r1, _080C799C  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r0, r1, r2
	ldrb r3, [r0]
	mov r2, #7
	add r0, r2, #0
	and r0, r0, r3
	ldr r3, _080C79A0  @ =0x00000968
	add r4, r1, r3
	strb r0, [r4]
	sub r3, r3, #4
	add r0, r1, r3
	ldrb r0, [r0]
	and r2, r2, r0
	add r3, r3, #5
	add r0, r1, r3
	strb r2, [r0]
	ldr r3, _080C79A4  @ =0x000015E2
	add r0, r1, r3
	ldrb r0, [r0]
	sub r0, r0, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080C79A8  @ =0x0000096C
	add r1, r1, r3
	strb r0, [r1]
	lsl r1, r0, #27
	lsr r3, r1, #24
	orr r3, r3, r2
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #1
	ble _080C79B0
	mov r2, #0
	mov r1, #0
	ldrsb r1, [r4, r1]
	ldr r0, _080C79AC  @ =gUnknown_08172250
	add r0, r3, r0
	ldrb r0, [r0]
	b _080C79BC
_080C799C:
	.4byte gRam
_080C79A0:
	.4byte 0x00000968
_080C79A4:
	.4byte 0x000015E2
_080C79A8:
	.4byte 0x0000096C
_080C79AC:
	.4byte gUnknown_08172250
_080C79B0:
	mov r2, #0
	ldr r0, _080C79CC  @ =gUnknown_08172250
	add r0, r3, r0
	ldrb r1, [r0]
	mov r0, #0
	ldrsb r0, [r4, r0]
_080C79BC:
	cmp r1, r0
	blt _080C79C2
	mov r2, #1
_080C79C2:
	add r0, r2, #0
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080C79CC:
	.4byte gUnknown_08172250
	THUMB_FUNC_END sub_080C7948

