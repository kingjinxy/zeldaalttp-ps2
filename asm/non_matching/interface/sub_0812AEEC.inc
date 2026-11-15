	THUMB_FUNC_START sub_0812AEEC
sub_0812AEEC: @ 0x0812AEEC
	push {r4,r5,lr}
	add r3, r0, #0
	add r4, r3, #0
	add r4, r4, #64
	ldrh r0, [r4, #8]
	cmp r0, #0
	bne _0812AF46
	ldr r0, [r4, #4]
	str r0, [r3, #64]
	ldrb r1, [r4, #16]
	add r0, r1, #1
	strb r0, [r4, #16]
	mov r0, #16
	ldrsb r0, [r4, r0]
	ldr r2, [r4, #12]
	lsl r0, r0, #2
	add r0, r0, r2
	mov r5, #0
	ldrsh r0, [r0, r5]
	cmp r0, #0
	bge _0812AF18
	strb r1, [r4, #16]
_0812AF18:
	mov r0, #16
	ldrsb r0, [r4, r0]
	lsl r0, r0, #2
	add r0, r0, r2
	mov r5, #2
	ldrsh r1, [r0, r5]
	str r1, [r4, #4]
	mov r0, #16
	ldrsb r0, [r4, r0]
	lsl r0, r0, #2
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r4, #8]
	strh r1, [r4, #10]
	ldr r0, [r3, #64]
	sub r1, r1, r0
	strh r1, [r4, #10]
	mov r1, #10
	ldrsh r0, [r4, r1]
	ldrh r1, [r4, #8]
	bl __divsi3
	strh r0, [r4, #10]
_0812AF46:
	mov r5, #10
	ldrsh r1, [r4, r5]
	ldr r0, [r4]
	add r0, r0, r1
	str r0, [r4]
	ldrh r1, [r4, #8]
	sub r1, r1, #1
	strh r1, [r4, #8]
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0812AEEC

