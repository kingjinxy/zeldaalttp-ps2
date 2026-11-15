	THUMB_FUNC_START sub_08032A70
sub_08032A70: @ 0x08032A70
	push {lr}
	bl sub_080367CC
	cmp r0, #1
	bne _08032AA6
	ldr r1, _08032AAC  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #5
	bl sub_08036704
	ldr r1, _08032AB0  @ =gUnknown_03000520
	mov r0, #1
	neg r0, r0
	str r0, [r1, #12]
	mov r0, #0
	mov r1, #4
	bl sub_0800C0B0
	ldr r2, _08032AB4  @ =gUnknown_030004A0
	ldrh r1, [r2]
	mov r3, #224
	lsl r3, r3, #5
	add r0, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
_08032AA6:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08032AAC:
	.4byte gSubState
_08032AB0:
	.4byte gUnknown_03000520
_08032AB4:
	.4byte gUnknown_030004A0
	THUMB_FUNC_END sub_08032A70

