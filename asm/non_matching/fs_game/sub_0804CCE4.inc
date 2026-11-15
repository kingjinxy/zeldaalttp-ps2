	THUMB_FUNC_START sub_0804CCE4
sub_0804CCE4: @ 0x0804CCE4
	push {r7,lr}
	sub sp, sp, #16
	mov r7, sp
	add r3, r0, #0
	add r0, r2, #0
	add r2, r7, #0
	strb r3, [r2]
	add r2, r7, #1
	strb r1, [r2]
	add r1, r7, #2
	strb r0, [r1]
	ldr r0, _0804CD10  @ =gUnknown_0202A7E0
	str r0, [r7, #8]
	add r0, r7, #0
	add r0, r0, #12
	mov r1, #0
	strb r1, [r0]
_0804CD06:
	ldr r0, [r7, #8]
	ldr r1, _0804CD14  @ =gUnknown_0202A880
	cmp r0, r1
	bcc _0804CD18
	b _0804CD86
_0804CD10:
	.4byte gUnknown_0202A7E0
_0804CD14:
	.4byte gUnknown_0202A880
_0804CD18:
	ldr r0, [r7, #8]
	ldr r1, [r0, #12]
	cmp r1, #0
	beq _0804CD22
	b _0804CD68
_0804CD22:
	add r1, r7, #0
	ldrb r0, [r1]
	add r2, r7, #1
	ldrb r1, [r2]
	add r3, r7, #2
	ldrb r2, [r3]
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804CD68
	add r0, r7, #0
	add r0, r0, #14
	mov r1, #0
	strh r1, [r0]
	add r0, r7, #0
	add r0, r0, #14
	ldr r1, [r7, #8]
	ldr r2, _0804CD64  @ =0x0100000A
	bl CpuSet
	ldr r0, [r7, #8]
	ldr r1, [r7, #4]
	str r1, [r0, #12]
	ldr r0, [r7, #4]
	ldr r1, [r7, #8]
	str r1, [r0, #96]
	add r0, r7, #0
	add r0, r0, #12
	ldrb r1, [r0]
	add r0, r1, #0
	b _0804CD8A
_0804CD64:
	.4byte 0x0100000A
_0804CD68:
	ldr r0, [r7, #8]
	add r1, r0, #0
	add r1, r1, #20
	str r1, [r7, #8]
	add r1, r7, #0
	add r1, r1, #12
	add r0, r7, #0
	add r0, r0, #12
	add r1, r7, #0
	add r1, r1, #12
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _0804CD06
_0804CD86:
	mov r0, #255
	b _0804CD8A
_0804CD8A:
	add sp, sp, #16
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804CCE4

	.byte 0x00
	.byte 0x00
