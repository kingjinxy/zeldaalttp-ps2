	THUMB_FUNC_START sub_08035710
sub_08035710: @ 0x08035710
	push {r4,r5,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldr r0, _08035744  @ =gUnknown_0201F000
	ldr r0, [r0]
	mov r5, #2
	and r0, r0, r5
	cmp r0, #0
	beq _0803573E
	add r0, r4, #0
	bl sub_0803CC20
	mov r1, #54
	ldrsh r0, [r4, r1]
	mov r1, #130
	lsl r1, r1, #1
	cmp r0, r1
	bgt _0803573E
	strh r1, [r4, #54]
	strb r5, [r4, #20]
	mov r0, #30
	strb r0, [r4, #23]
_0803573E:
	pop {r4,r5}
	pop {r0}
	bx r0
_08035744:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08035710

