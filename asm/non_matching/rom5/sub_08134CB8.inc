	THUMB_FUNC_START sub_08134CB8
sub_08134CB8: @ 0x08134CB8
	push {r4-r7,lr}
	ldr r0, _08134D04  @ =gUnknown_03007FF0
	ldr r6, [r0]
	ldr r1, [r6]
	ldr r0, _08134D08  @ =0x68736D53
	cmp r1, r0
	bne _08134CFE
	add r0, r1, #1
	str r0, [r6]
	mov r5, #12
	add r4, r6, #0
	add r4, r4, #80
	mov r0, #0
_08134CD2:
	strb r0, [r4]
	sub r5, r5, #1
	add r4, r4, #64
	cmp r5, #0
	bgt _08134CD2
	ldr r4, [r6, #28]
	cmp r4, #0
	beq _08134CFA
	mov r5, #1
	mov r7, #0
_08134CE6:
	lsl r0, r5, #24
	lsr r0, r0, #24
	ldr r1, [r6, #44]
	bl _call_via_r1
	strb r7, [r4]
	add r5, r5, #1
	add r4, r4, #64
	cmp r5, #4
	ble _08134CE6
_08134CFA:
	ldr r0, _08134D08  @ =0x68736D53
	str r0, [r6]
_08134CFE:
	pop {r4-r7}
	pop {r0}
	bx r0
_08134D04:
	.4byte gUnknown_03007FF0
_08134D08:
	.4byte 0x68736D53
	THUMB_FUNC_END sub_08134CB8

