	THUMB_FUNC_START sub_08106148
sub_08106148: @ 0x08106148
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r4, r1, #0
	ldr r5, _08106178  @ =gRam
	ldr r0, _0810617C  @ =0x0000152C
	add r6, r5, r0
	ldrb r0, [r6]
	cmp r0, #255
	bne _081061AA
	add r0, r1, #0
	bl sub_080C46EC
	lsl r0, r0, #24
	cmp r0, #0
	beq _081061AA
	bl sub_0809E1B8
	lsl r0, r0, #24
	cmp r0, #0
	beq _08106180
	bl sub_080C51A8
	b _081061AA
_08106178:
	.4byte gRam
_0810617C:
	.4byte 0x0000152C
_08106180:
	ldr r2, _081061B0  @ =0x00000F92
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _081061B4  @ =0x00000FD2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	bl sub_08092E50
	ldr r2, _081061B8  @ =0x00001770
	add r0, r5, r2
	mov r1, #1
	strb r1, [r0]
	add r2, r2, #157
	add r0, r5, r2
	strb r1, [r0]
	strb r4, [r6]
_081061AA:
	pop {r4-r6}
	pop {r0}
	bx r0
_081061B0:
	.4byte 0x00000F92
_081061B4:
	.4byte 0x00000FD2
_081061B8:
	.4byte 0x00001770
	THUMB_FUNC_END sub_08106148

