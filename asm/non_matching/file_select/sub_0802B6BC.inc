	THUMB_FUNC_START sub_0802B6BC
sub_0802B6BC: @ 0x0802B6BC
	push {r4,r5,lr}
	ldr r5, _0802B6E8  @ =gUnknown_0202A770
	add r0, r5, #0
	mov r1, #104
	bl zero_memory
	ldr r1, _0802B6EC  @ =gUnknown_02016328
	mov r0, #0
	strb r0, [r1]
	mov r0, #0
	strb r0, [r5]
	ldr r4, _0802B6F0  @ =gUnknown_03006C80
	ldrb r0, [r4, #1]
	cmp r0, #2
	bne _0802B6F8
	bl sub_0800099C
	ldr r3, _0802B6F4  @ =gUnknown_084296C0
	ldrb r1, [r4, #3]
	add r1, r1, #3
	b _0802B702
	.byte 0x00
	.byte 0x00
_0802B6E8:
	.4byte gUnknown_0202A770
_0802B6EC:
	.4byte gUnknown_02016328
_0802B6F0:
	.4byte gUnknown_03006C80
_0802B6F4:
	.4byte gUnknown_084296C0
_0802B6F8:
	bl sub_0800099C
	ldr r3, _0802B72C  @ =gUnknown_084296C0
	ldrb r1, [r4, #6]
	sub r1, r1, #1
_0802B702:
	lsl r1, r1, #3
	mov r2, #7
	and r2, r2, r0
	add r1, r1, r2
	add r1, r1, r3
	ldrb r1, [r1]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #2
	ldr r1, _0802B730  @ =gUnknown_084296F0
	add r0, r0, r1
	str r0, [r5, #88]
	ldr r0, _0802B734  @ =gUnknown_0202A770
	add r1, r0, #0
	add r1, r1, #92
	ldr r0, [r0, #88]
	ldm r0!, {r2-r4}
	stm r1!, {r2-r4}
	pop {r4,r5}
	pop {r0}
	bx r0
_0802B72C:
	.4byte gUnknown_084296C0
_0802B730:
	.4byte gUnknown_084296F0
_0802B734:
	.4byte gUnknown_0202A770
	THUMB_FUNC_END sub_0802B6BC

