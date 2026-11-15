	THUMB_FUNC_START sub_08134C20
sub_08134C20: @ 0x08134C20
	push {r4,r5,lr}
	add r3, r0, #0
	ldr r0, _08134CAC  @ =gUnknown_03007FF0
	ldr r5, [r0]
	ldr r1, [r5]
	ldr r0, _08134CB0  @ =0x68736D53
	cmp r1, r0
	bne _08134CA6
	add r0, r1, #1
	str r0, [r5]
	mov r4, #255
	and r4, r4, r3
	cmp r4, #0
	beq _08134C42
	mov r0, #127
	and r4, r4, r0
	strb r4, [r5, #5]
_08134C42:
	mov r4, #240
	lsl r4, r4, #4
	and r4, r4, r3
	cmp r4, #0
	beq _08134C62
	lsr r0, r4, #8
	strb r0, [r5, #6]
	mov r4, #12
	add r0, r5, #0
	add r0, r0, #80
	mov r1, #0
_08134C58:
	strb r1, [r0]
	sub r4, r4, #1
	add r0, r0, #64
	cmp r4, #0
	bne _08134C58
_08134C62:
	mov r4, #240
	lsl r4, r4, #8
	and r4, r4, r3
	cmp r4, #0
	beq _08134C70
	lsr r0, r4, #12
	strb r0, [r5, #7]
_08134C70:
	mov r4, #176
	lsl r4, r4, #16
	and r4, r4, r3
	cmp r4, #0
	beq _08134C8E
	mov r0, #192
	lsl r0, r0, #14
	and r0, r0, r4
	lsr r4, r0, #14
	ldr r2, _08134CB4  @ =0x04000089
	ldrb r1, [r2]
	mov r0, #63
	and r0, r0, r1
	orr r0, r0, r4
	strb r0, [r2]
_08134C8E:
	mov r4, #240
	lsl r4, r4, #12
	and r4, r4, r3
	cmp r4, #0
	beq _08134CA2
	bl sub_08134D0C
	add r0, r4, #0
	bl sub_08134B7C
_08134CA2:
	ldr r0, _08134CB0  @ =0x68736D53
	str r0, [r5]
_08134CA6:
	pop {r4,r5}
	pop {r0}
	bx r0
_08134CAC:
	.4byte gUnknown_03007FF0
_08134CB0:
	.4byte 0x68736D53
_08134CB4:
	.4byte 0x04000089
	THUMB_FUNC_END sub_08134C20

