	THUMB_FUNC_START sub_0803D398
sub_0803D398: @ 0x0803D398
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r1, r7, #0
	strh r0, [r1]
	add r0, r7, #0
	mov r2, #0
	ldrsh r1, [r0, r2]
	cmp r1, #0
	bne _0803D3B0
	mov r0, #0
	b _0803D3C8
_0803D3B0:
	add r0, r7, #0
	mov r2, #0
	ldrsh r1, [r0, r2]
	mov r0, #128
	lsl r0, r0, #9
	bl __divsi3
	add r1, r0, #0
	lsl r0, r1, #16
	asr r1, r0, #16
	add r0, r1, #0
	b _0803D3C8
_0803D3C8:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803D398

