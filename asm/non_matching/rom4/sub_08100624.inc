	THUMB_FUNC_START sub_08100624
sub_08100624: @ 0x08100624
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _0810069C  @ =gRam
	ldr r0, _081006A0  @ =0x00001042
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	ldr r1, _081006A4  @ =0x00001062
	add r0, r3, r1
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08100666
	ldr r1, _081006A8  @ =0x00001002
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _081006AC  @ =0x00001082
	add r2, r3, r0
	add r2, r4, r2
	ldrb r0, [r2]
	add r0, r0, #1
	mov r1, #15
	and r0, r0, r1
	strb r0, [r2]
_08100666:
	ldr r1, _081006B0  @ =0x00001052
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	cmp r0, #0
	bne _08100686
	ldr r1, _081006A8  @ =0x00001002
	add r0, r3, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #5
	beq _08100686
	add r0, r0, #1
	strb r0, [r1]
_08100686:
	add r0, r4, #0
	bl sub_081016C8
	add r0, r4, #0
	mov r1, #15
	bl sub_08101648
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810069C:
	.4byte gRam
_081006A0:
	.4byte 0x00001042
_081006A4:
	.4byte 0x00001062
_081006A8:
	.4byte 0x00001002
_081006AC:
	.4byte 0x00001082
_081006B0:
	.4byte 0x00001052
	THUMB_FUNC_END sub_08100624

