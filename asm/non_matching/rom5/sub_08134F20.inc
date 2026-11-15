	THUMB_FUNC_START sub_08134F20
sub_08134F20: @ 0x08134F20
	push {r4-r6,lr}
	add r6, r0, #0
	ldr r1, [r6, #52]
	ldr r0, _08134F5C  @ =0x68736D53
	cmp r1, r0
	bne _08134F56
	add r0, r1, #1
	str r0, [r6, #52]
	ldr r0, [r6, #4]
	mov r1, #128
	lsl r1, r1, #24
	orr r0, r0, r1
	str r0, [r6, #4]
	ldrb r4, [r6, #8]
	ldr r5, [r6, #44]
	cmp r4, #0
	ble _08134F52
_08134F42:
	add r0, r6, #0
	add r1, r5, #0
	bl sub_081342DC
	sub r4, r4, #1
	add r5, r5, #80
	cmp r4, #0
	bgt _08134F42
_08134F52:
	ldr r0, _08134F5C  @ =0x68736D53
	str r0, [r6, #52]
_08134F56:
	pop {r4-r6}
	pop {r0}
	bx r0
_08134F5C:
	.4byte 0x68736D53
	THUMB_FUNC_END sub_08134F20

