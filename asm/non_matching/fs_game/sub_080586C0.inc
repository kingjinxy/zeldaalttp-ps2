	THUMB_FUNC_START sub_080586C0
sub_080586C0: @ 0x080586C0
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r0, [r7]
	mov r2, #50
	ldrsh r1, [r0, r2]
	mov r0, #152
	lsl r0, r0, #1
	cmp r1, r0
	ble _080586F0
	ldr r0, [r7]
	ldrh r1, [r0, #50]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _080586F8  @ =0x0000FF88
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
_080586F0:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_080586F8:
	.4byte 0x0000FF88
	THUMB_FUNC_END sub_080586C0

