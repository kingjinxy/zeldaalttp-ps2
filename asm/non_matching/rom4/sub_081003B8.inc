	THUMB_FUNC_START sub_081003B8
sub_081003B8: @ 0x081003B8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _081004B0  @ =gRam
	ldr r0, _081004B4  @ =0x00000F92
	add r2, r5, r0
	add r2, r4, r2
	ldr r3, _081004B8  @ =gUnknown_0817AD84
	add r0, r0, #240
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _081004BC  @ =0x00001122
	add r2, r5, r0
	add r2, r4, r2
	ldr r3, _081004C0  @ =gUnknown_0817AD94
	ldrb r0, [r1]
	add r0, r0, r3
	ldrb r1, [r0]
	mov r0, #3
	orr r0, r0, r1
	strb r0, [r2]
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _081004E8
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _081004E8
	ldr r2, _081004C4  @ =0x00000FC2
	add r0, r5, r2
	add r0, r0, r4
	mov r8, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _081004DC
	add r0, r4, #0
	bl sub_080C500C
	mov r7, #0
	ldr r1, _081004C8  @ =0x00000F22
	add r0, r5, r1
	add r6, r4, r0
	ldrb r1, [r6]
	mov r2, #128
	mov r12, r2
	mov r0, r12
	and r0, r0, r1
	cmp r0, #0
	beq _0810043E
	mov r7, #255
_0810043E:
	ldr r0, _081004CC  @ =0x00000EE2
	add r3, r5, r0
	add r3, r4, r3
	ldrb r1, [r3]
	add r0, r0, #32
	add r2, r5, r0
	add r2, r4, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldrb r6, [r6]
	add r1, r1, r6
	lsl r0, r7, #8
	add r1, r1, r0
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r2]
	mov r7, #0
	ldr r1, _081004D0  @ =0x00000F12
	add r0, r5, r1
	add r6, r4, r0
	ldrb r1, [r6]
	mov r0, r12
	and r0, r0, r1
	cmp r0, #0
	beq _08100474
	mov r7, #255
_08100474:
	ldr r2, _081004D4  @ =0x00000ED2
	add r3, r5, r2
	add r3, r4, r3
	ldrb r1, [r3]
	ldr r0, _081004D8  @ =0x00000EF2
	add r2, r5, r0
	add r2, r4, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldrb r6, [r6]
	add r1, r1, r6
	lsl r0, r7, #8
	add r1, r1, r0
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r2]
	add r0, r4, #0
	bl sub_080C7A48
	lsl r0, r0, #24
	cmp r0, #0
	beq _081004A8
	mov r0, #12
	mov r1, r8
	strb r0, [r1]
_081004A8:
	add r0, r4, #0
	bl sub_08101428
	b _081004E8
_081004B0:
	.4byte gRam
_081004B4:
	.4byte 0x00000F92
_081004B8:
	.4byte gUnknown_0817AD84
_081004BC:
	.4byte 0x00001122
_081004C0:
	.4byte gUnknown_0817AD94
_081004C4:
	.4byte 0x00000FC2
_081004C8:
	.4byte 0x00000F22
_081004CC:
	.4byte 0x00000EE2
_081004D0:
	.4byte 0x00000F12
_081004D4:
	.4byte 0x00000ED2
_081004D8:
	.4byte 0x00000EF2
_081004DC:
	cmp r0, #1
	bne _081004E8
	ldr r2, _081004F4  @ =0x00000FA2
	add r0, r5, r2
	add r0, r6, r0
	strb r1, [r0]
_081004E8:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_081004F4:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_081003B8

