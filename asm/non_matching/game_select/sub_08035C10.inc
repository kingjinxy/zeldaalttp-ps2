	THUMB_FUNC_START sub_08035C10
sub_08035C10: @ 0x08035C10
	push {r4,lr}
	add r4, r0, #0
	bl sub_0803CC20
	mov r1, #54
	ldrsh r0, [r4, r1]
	mov r1, #140
	lsl r1, r1, #1
	cmp r0, r1
	bgt _08035C2E
	strh r1, [r4, #54]
	mov r0, #10
	strb r0, [r4, #20]
	mov r0, #100
	strb r0, [r4, #23]
_08035C2E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08035C10

