	THUMB_FUNC_START sub_08134D0C
sub_08134D0C: @ 0x08134D0C
	push {lr}
	sub sp, sp, #4
	ldr r0, _08134D6C  @ =gUnknown_03007FF0
	ldr r2, [r0]
	ldr r1, [r2]
	ldr r3, _08134D70  @ =0x978C92AD
	add r0, r1, r3
	cmp r0, #1
	bhi _08134D64
	add r0, r1, #0
	add r0, r0, #10
	str r0, [r2]
	ldr r1, _08134D74  @ =0x040000C4
	ldr r0, [r1]
	mov r3, #128
	lsl r3, r3, #18
	and r0, r0, r3
	cmp r0, #0
	beq _08134D36
	ldr r0, _08134D78  @ =0x84400004
	str r0, [r1]
_08134D36:
	ldr r1, _08134D7C  @ =0x040000D0
	ldr r0, [r1]
	and r0, r0, r3
	cmp r0, #0
	beq _08134D44
	ldr r0, _08134D78  @ =0x84400004
	str r0, [r1]
_08134D44:
	ldr r0, _08134D80  @ =0x040000C6
	mov r3, #128
	lsl r3, r3, #3
	add r1, r3, #0
	strh r1, [r0]
	add r0, r0, #12
	strh r1, [r0]
	mov r0, #0
	str r0, [sp]
	mov r0, #212
	lsl r0, r0, #2
	add r1, r2, r0
	ldr r2, _08134D84  @ =0x05000318
	mov r0, sp
	bl CpuSet
_08134D64:
	add sp, sp, #4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08134D6C:
	.4byte gUnknown_03007FF0
_08134D70:
	.4byte 0x978C92AD
_08134D74:
	.4byte 0x040000C4
_08134D78:
	.4byte 0x84400004
_08134D7C:
	.4byte 0x040000D0
_08134D80:
	.4byte 0x040000C6
_08134D84:
	.4byte 0x05000318
	THUMB_FUNC_END sub_08134D0C

