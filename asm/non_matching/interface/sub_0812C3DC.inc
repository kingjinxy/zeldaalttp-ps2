	THUMB_FUNC_START sub_0812C3DC
sub_0812C3DC: @ 0x0812C3DC
	push {r4-r7,lr}
	sub sp, sp, #4
	mov r6, #0
_0812C3E2:
	lsl r0, r6, #3
	add r0, r0, r6
	lsl r0, r0, #3
	ldr r1, _0812C40C  @ =gUnknown_03001C88
	add r1, r0, r1
	add r0, r1, #0
	add r0, r0, #66
	ldrb r0, [r0]
	add r7, r6, #1
	cmp r0, #0
	beq _0812C45E
	ldrh r2, [r1, #58]
	cmp r2, #0
	bne _0812C410
	cmp r0, #2
	bne _0812C426
	add r0, r6, #0
	bl sub_0812C5B4
	b _0812C45E
	.byte 0x00
	.byte 0x00
_0812C40C:
	.4byte gUnknown_03001C88
_0812C410:
	ldrh r0, [r1, #54]
	ldrh r3, [r1, #52]
	add r0, r0, r3
	strh r0, [r1, #52]
	sub r0, r2, #1
	strh r0, [r1, #58]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0812C426
	ldrh r0, [r1, #56]
	strh r0, [r1, #52]
_0812C426:
	mov r2, #0
	add r7, r6, #1
	add r4, r1, #0
	add r4, r4, #8
	mov r5, #9
_0812C430:
	ldr r0, [r4]
	cmp r0, #0
	beq _0812C44C
	str r2, [sp]
	bl sub_0812BE54
	lsl r0, r0, #24
	ldr r2, [sp]
	cmp r0, #0
	bne _0812C448
	mov r2, #1
	b _0812C44C
_0812C448:
	mov r0, #0
	str r0, [r4]
_0812C44C:
	add r4, r4, #4
	sub r5, r5, #1
	cmp r5, #0
	bge _0812C430
	cmp r2, #0
	bne _0812C45E
	add r0, r6, #0
	bl sub_0812C5B4
_0812C45E:
	add r6, r7, #0
	cmp r6, #19
	ble _0812C3E2
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0812C3DC

