	THUMB_FUNC_START sub_0804D118
sub_0804D118: @ 0x0804D118
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0804D14C  @ =gUnknown_0202A4F8
	ldr r1, _0804D150  @ =gUnknown_08137B10
	ldr r2, [r7]
	ldr r3, [r2, #16]
	add r2, r3, #2
	ldrh r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, r3
	ldr r0, [r0]
	ldr r1, [r1]
	and r0, r0, r1
	cmp r0, #0
	beq _0804D146
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #16]
	add r1, r2, #4
	str r1, [r0, #16]
_0804D146:
	mov r0, #0
	b _0804D154
	.byte 0x00
	.byte 0x00
_0804D14C:
	.4byte gUnknown_0202A4F8
_0804D150:
	.4byte gUnknown_08137B10
_0804D154:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804D118

