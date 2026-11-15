	THUMB_FUNC_START sub_08019F00
sub_08019F00: @ 0x08019F00
	push {lr}
	add r2, r0, #0
	ldr r0, [r2, #56]
	mov r1, #176
	lsl r1, r1, #8
	add r0, r0, r1
	str r0, [r2, #56]
	mov r0, #58
	ldrsh r1, [r2, r0]
	mov r0, #64
	neg r0, r0
	cmp r1, r0
	bne _08019F22
	mov r0, #13
	strb r0, [r2, #20]
	mov r0, #240
	strb r0, [r2, #23]
_08019F22:
	add r0, r2, #0
	bl 0x08003828
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08019F00

