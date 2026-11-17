	THUMB_FUNC_START sub_08134A84
sub_08134A84: @ 0x08134A84
	push {r4,r5,lr}
	sub sp, sp, #4
	add r5, r0, #0
	mov r3, #0
	str r3, [r5]
	ldr r1, _08134B3C  @ =0x040000C4
	ldr r0, [r1]
	mov r2, #128
	lsl r2, r2, #18
	and r0, r0, r2
	cmp r0, #0
	beq _08134AA0
	ldr r0, _08134B40  @ =0x84400004
	str r0, [r1]
_08134AA0:
	ldr r1, _08134B44  @ =0x040000D0
	ldr r0, [r1]
	and r0, r0, r2
	cmp r0, #0
	beq _08134AAE
	ldr r0, _08134B40  @ =0x84400004
	str r0, [r1]
_08134AAE:
	ldr r0, _08134B48  @ =0x040000C6
	mov r2, #128
	lsl r2, r2, #3
	add r1, r2, #0
	strh r1, [r0]
	add r0, r0, #12
	strh r1, [r0]
	ldr r1, _08134B4C  @ =0x04000084
	mov r0, #143
	strh r0, [r1]
	sub r1, r1, #2
	ldr r2, _08134B50  @ =0x0000A90E
	add r0, r2, #0
	strh r0, [r1]
	ldr r2, _08134B54  @ =0x04000089
	ldrb r1, [r2]
	mov r0, #63
	and r0, r0, r1
	mov r1, #64
	orr r0, r0, r1
	strb r0, [r2]
	ldr r1, _08134B58  @ =0x040000BC
	mov r2, #212
	lsl r2, r2, #2
	add r0, r5, r2
	str r0, [r1]
	add r1, r1, #4
	ldr r0, _08134B5C  @ =0x040000A0
	str r0, [r1]
	add r1, r1, #8
	mov r2, #152
	lsl r2, r2, #4
	add r0, r5, r2
	str r0, [r1]
	add r1, r1, #4
	ldr r0, _08134B60  @ =0x040000A4
	str r0, [r1]
	ldr r0, _08134B64  @ =gUnknown_03007FF0
	str r5, [r0]
	str r3, [sp]
	ldr r2, _08134B68  @ =0x050003EC
	mov r0, sp
	add r1, r5, #0
	bl CpuSet
	mov r0, #8
	strb r0, [r5, #6]
	mov r0, #15
	strb r0, [r5, #7]
	ldr r0, _08134B6C  @ =0x08134351
	str r0, [r5, #56]
	ldr r0, _08134B70  @ =0x08135B75
	str r0, [r5, #40]
	str r0, [r5, #44]
	str r0, [r5, #48]
	str r0, [r5, #60]
	ldr r4, _08134B74  @ =gUnknown_02031A30
	add r0, r4, #0
	bl sub_08133E64
	str r4, [r5, #52]
	mov r0, #128
	lsl r0, r0, #11
	bl sub_08134B7C
	ldr r0, _08134B78  @ =0x68736D53
	str r0, [r5]
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_08134B3C:
	.4byte 0x040000C4
_08134B40:
	.4byte 0x84400004
_08134B44:
	.4byte 0x040000D0
_08134B48:
	.4byte 0x040000C6
_08134B4C:
	.4byte 0x04000084
_08134B50:
	.4byte 0x0000A90E
_08134B54:
	.4byte 0x04000089
_08134B58:
	.4byte 0x040000BC
_08134B5C:
	.4byte 0x040000A0
_08134B60:
	.4byte 0x040000A4
_08134B64:
	.4byte gUnknown_03007FF0
_08134B68:
	.4byte 0x050003EC
_08134B6C:
	.4byte sub_08134350
_08134B70:
	.4byte _08134B78+0xffd
_08134B74:
	.4byte gUnknown_02031A30
_08134B78:
	.4byte 0x68736D53
	THUMB_FUNC_END sub_08134A84

