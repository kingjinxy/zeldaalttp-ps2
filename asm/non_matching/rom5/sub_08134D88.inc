	THUMB_FUNC_START sub_08134D88
sub_08134D88: @ 0x08134D88
	push {r4,lr}
	ldr r0, _08134DB8  @ =gUnknown_03007FF0
	ldr r2, [r0]
	ldr r3, [r2]
	ldr r0, _08134DBC  @ =0x68736D53
	cmp r3, r0
	beq _08134DB0
	ldr r0, _08134DC0  @ =0x040000C6
	mov r4, #182
	lsl r4, r4, #8
	add r1, r4, #0
	strh r1, [r0]
	add r0, r0, #12
	strh r1, [r0]
	ldrb r0, [r2, #4]
	mov r0, #0
	strb r0, [r2, #4]
	add r0, r3, #0
	sub r0, r0, #10
	str r0, [r2]
_08134DB0:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08134DB8:
	.4byte gUnknown_03007FF0
_08134DBC:
	.4byte 0x68736D53
_08134DC0:
	.4byte 0x040000C6
	THUMB_FUNC_END sub_08134D88

