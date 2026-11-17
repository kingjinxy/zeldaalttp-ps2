	THUMB_FUNC_START sub_08017834
sub_08017834: @ 0x08017834
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08017866
	bl sub_0800099C
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0801785A
	strb r1, [r4, #20]
	b _08017866
_0801785A:
	mov r0, #3
	strb r0, [r4, #20]
	add r0, r4, #0
	mov r1, #1
	bl sub_08003870
_08017866:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08017834

